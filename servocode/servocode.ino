#include <Servo.h>
Servo myservo;
int pos = 0;
const int buttonPin = 8;
const int servoPin = 10;
int buttonState = 0;
int previousButtonState;

unsigned long currentTime;
unsigned long previousTime = 0;
int timerLength = 2000;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(servoPin);
  myservo.write(0);
  pinMode(buttonPin, INPUT);
  pinMode(servoPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //currentTime = millis();
  buttonState = digitalRead(buttonPin);

  if (previousButtonState != buttonState){
    if(buttonState == HIGH){
      myservo.write(180);
    } else {
      myservo.write(0);
    }
  }

  previousButtonState = buttonState;
}
