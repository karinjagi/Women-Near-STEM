#include <Servo.h>
Servo myservo;
int pos = 0;
const int buttonPin = 8;
const int servoPin = 10;
int buttonState = 0;
int previousButtonState;
int buttonState2 = 0;
int previousButtonState2;
const int buttonPin2 = 6;
const int servoPin2 = 5;
Servo myservo2;
int buttonState3 = 0;
int previousButtonState3;
const int buttonPin3 = 11;
const int servoPin3 = 3;
Servo myservo3;

unsigned long currentTime;
unsigned long previousTime = 0;
int timerLength = 2000;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(servoPin);
  myservo.write(0);
  pinMode(buttonPin, INPUT);
  pinMode(servoPin, OUTPUT);
  myservo2.attach(servoPin2);
  myservo2.write(0);
  pinMode(buttonPin2, INPUT);
  pinMode(servoPin2, OUTPUT);
  myservo3.attach(servoPin3);
  myservo3.write(0);
  pinMode(buttonPin3, INPUT);
  pinMode(servoPin3, OUTPUT);
  myservo3.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  //currentTime = millis();
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);

  if (previousButtonState != buttonState){
    if(buttonState == HIGH){
      myservo.write(180);
    } else {
      myservo.write(0);
    }
  }
  if (previousButtonState2 != buttonState2){
    if(buttonState2 == HIGH){
      myservo2.write(180);
    } else {
      myservo2.write(0);
    }
  }
  if (previousButtonState3 != buttonState3){
    if(buttonState3 == HIGH){
      myservo3.write(180);
    }
  }
  previousButtonState = buttonState;
  previousButtonState2 = buttonState2;
  previousButtonState3 = buttonState3;
}
