#include <Servo.h>

Servo myServo;
const int servoPin = 6;
const int copperPin = 2;

bool hasRun = false;

void setup() {
  Serial.begin(9600);
  pinMode(copperPin, INPUT_PULLUP);
  delay(2000);
  myServo.attach(servoPin);
  myServo.write(90);
  delay(500);
  myServo.detach();
}

void loop() {
  int sensorVal = digitalRead(copperPin);
  Serial.println(sensorVal);   // watch this in Serial Monitor

  if (sensorVal == LOW && !hasRun) {
    hasRun = true;
    myServo.attach(servoPin);
    myServo.write(180);
    delay(600);
    myServo.write(90);
    delay(200);
    myServo.detach();
  }

  if (sensorVal == HIGH) {
    hasRun = false;
  }
  delay(100);
}



