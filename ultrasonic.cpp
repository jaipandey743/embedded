#include <Arduino.h>
#define ecoPin 16
#define trigPin 17
long duration;
float distance;

void setup() {
    Serial.begin(115200);
    pinMode(ecoPin, INPUT);
    pinMode(trigPin, OUTPUT);
}
void loop() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(ecoPin, HIGH);
    distance = duration / 58.2;
    Serial.print("Distance:");  
    Serial.print(distance);
    Serial.println("cm");
    delay(1000);
}