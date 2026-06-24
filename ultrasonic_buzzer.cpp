#include <Arduino.h>
#define echoPin 16
#define trigPin 17
#define buzzerPin 5
long duration;
float distance;
void setup() {
    Serial.begin(115200);
    pinMode(echoPin, INPUT);
    pinMode(trigPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);
}
void loop() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration / 58.2;
    Serial.print("Distance: ");
    Serial.println(distance);
    delay(1000);
    if (distance < 100) {
        digitalWrite(buzzerPin, HIGH);
    } else {
        digitalWrite(buzzerPin, LOW);
    }
}