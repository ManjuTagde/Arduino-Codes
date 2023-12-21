#include <Servo.h>
Servo nameServo;
void setup() {

nameServo.attach(5);// D4
pinMode(4,INPUT);
}

void loop() {
  int x=digitalRead(4);
  if (x==1)
  {
    nameServo.write(180);
  delay(1000);
  }
  else{
  nameServo.write(90);
  }
}
