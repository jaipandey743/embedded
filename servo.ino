#include <ESP32Servo.h>
Servo myServo;
const int servoPin = 13;
void setup(){
  myServo.attach(servoPin);
  myServo.write(0);
  delay(500);
}
void loop(){
  myServo.write(180);
  delay(1000);
  myServo.write(0);
  delay(1000);
}