#include <Servo.h>
Servo myservo;
int pos = 0;
const int buttonPin = 8;
const int servoPin = 10;
int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(servoPin);
  pinMode(buttonPin, INPUT);
  pinMode(servoPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    for (pos = 0; pos <= 180; pos += 180){
      myservo.write(pos);
    }
  }
  else if (buttonState == LOW) {
    for (pos = 180; pos >= 0; pos -= 180){
      myservo.write(pos);
    }
  }
}
