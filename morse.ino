int dot = 200;
int dash = 700;
int finalDelay = 1500;
int pinEight = 8;
void setup() {
  pinMode(8,OUTPUT);
}

void loop() {
   for (int i = 0; i < 3; ++i){
      digitalWrite(pinEight,HIGH);
      delay(dot);
      digitalWrite(pinEight,LOW);
      delay(dot);
  }
  for (int i = 0; i < 3; ++i){
      digitalWrite(pinEight,HIGH);
      delay(dash);
      digitalWrite(pinEight,LOW);
      delay(dash);
  }
     for (int i = 0; i < 3; ++i){
      digitalWrite(pinEight,HIGH);
      delay(dot);
      digitalWrite(pinEight,LOW);
      delay(dot);
  }
  delay(finalDelay);
}
