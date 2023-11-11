#include <Servo.h>
Servo myservo;
int pos = 0;
const int buttonPin = 2;
void setup() {
  // put your setup code here, to run once:
myservo.attach(10)
pinMode(buttonPin, INPUT);
pinMode(myservo, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(buttonPin);
if (buttonState == HIGH) {
  for (pos = 0; pos <= 180; pos += 1){
    myservo.write(pos);
  }
if buttonState == LOW) {
  for (pos = 180; pos >= 0; pos -= 1){
    myservo.write(pos);}
}
