

void setup() {
  
  pinMode(13,OUTPUT); //RED LED
  pinMode(10,OUTPUT); //GREEN LED
  pinMode(9,OUTPUT); //buzzer
  pinMode(8,OUTPUT); //Blue led
  

}

void loop() {
  //RED LED
  digitalWrite(13,HIGH);
  delay(2000);
  digitalWrite(13,LOW);
  delay(100);

//  GREEN
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  delay(100);

  //  blue led
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(100);
  
  //BUZZER
  tone(9,1275,200);
  delay(2000);
  
  tone(9,1136,200);
  delay(2000);
  
  tone(9,1275,200);
  delay(2000);
}


