

void setup() {
  
  pinMode(13,OUTPUT); //LED
  pinMode(11,OUTPUT); //BUZZER
  

}

void loop() {
  //LED
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(100);
  
  //BUZZER
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(11,LOW);
  delay(100);
}


