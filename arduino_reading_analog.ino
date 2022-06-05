int deger = 0,x=0, y=0;
void setup() {
  Serial.begin(9600);
  pinMode(12,OUTPUT);
  Serial.print("Manyetik alan 0-100: ");
}

void loop() {
  
  deger = analogRead(A1);
  x=map(deger,0,1023,0,100);
  Serial.println(x);
  delay(10);
}
