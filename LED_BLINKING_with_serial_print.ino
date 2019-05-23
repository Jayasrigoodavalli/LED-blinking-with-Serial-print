void setup()
{
  Serial.begin(115200);
  pinMode(2,OUTPUT);
  
}

void loop() 
{
  Serial.println("LOW");
  digitalWrite(2,LOW);
  delay(1000);
  Serial.println("HIGH");
  digitalWrite(2,HIGH);
  delay(1000);


}
