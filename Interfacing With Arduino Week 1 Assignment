#define LED 13
#define PUSH_BUTTON1 3
#define PUSH_BUTTON2 2
void setup() {
  pinMode(LED,OUTPUT);
  pinMode(PUSH_BUTTON1,INPUT);
  pinMode(PUSH_BUTTON2,INPUT);
}

void loop() {
  int Y = digitalRead(PUSH_BUTTON1);
  if (Y==HIGH){
    digitalWrite(LED,HIGH);
    delay(200);
  }
  else{
    digitalWrite(LED,LOW);
  }
  int X=digitalRead(PUSH_BUTTON2);
  if(X==HIGH){
    digitalWrite(LED,HIGH);
    delay(200);
  }
  else{
    digitalWrite(LED,LOW);
  }
}
