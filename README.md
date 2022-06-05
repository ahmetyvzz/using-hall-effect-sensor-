# using-hall-effect-sensor-
## Hall Effect Sensörün Arduino ile Kontrolünün Labview'da İzlenmesi
  Hall effect sensör, manyetik alanın büyüklüğü ile doğru orantılı olarak gerilim çıkışı veren bir sensördür. Hall effect sensörleri, aktif olarak bazı motorların (bldc motor vb.) içerisinde rotorun konumunu belirlemek için kullanılmaktadır. Projede, bu sensör mıknatıs ile kontrol ederek elde edilen 0-1023 arası veriler, Arduino üzerinden 0-100 arası verilere dönüştürülerek Labview'de farklı indikatörler üzerinden görülmesi sağlandı. 
### Devrede Kullanılan Malzemeler
  - Arduino Uno
  - 49E Hall Effect Sensor
  - Erkek - erkek jumper
  
### LabVIEW Blok Diyagram 
   Arduino ile LABView haberleşmesi için Visa seri haberleşme protokolü kullanıldı. Bu protokol ile Arduino'nun bağlı olduğu port seçilerek Arduino verisinin LABView'e aktarılması sağlanır.
  ![diagram](https://user-images.githubusercontent.com/106908351/172057278-fc2b3ebe-2d8d-4b2a-81e9-1dccad75aa77.png)

#### LABView Ön Panel
  
![front panel](https://user-images.githubusercontent.com/106908351/172057532-eaa5ed92-48b7-4bd2-b21f-36d0f126e745.png)

##### Arduino Kodu
```
int deger = 0,x=0, y=0;
void setup() {
  Serial.begin(9600);
  Serial.print("Manyetik alan 0-100: ");
}

void loop() {
  
  deger = analogRead(A1);
  x=map(deger,0,1023,0,100);
  Serial.println(x);
  delay(10);
}
```

