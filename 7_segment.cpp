#include<Arduino.h>

#define pin1 2   // b
#define pin2 15  // a
#define pin4 19  // f
#define pin5 21  // g
#define pin6 22  // dp
#define pin7 4   // c
#define pin9 5   // d
#define pin10 18 // e

void setup() {
    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);
    pinMode(pin4, OUTPUT);
    pinMode(pin5, OUTPUT);
    pinMode(pin6, OUTPUT);
    pinMode(pin7, OUTPUT);
    pinMode(pin9, OUTPUT);
    pinMode(pin10, OUTPUT);
}

void displayNumber(int num) {
    // Turn ALL segments OFF first (for Common Cathode)
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin4, LOW);
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, LOW);
    digitalWrite(pin7, LOW);
    digitalWrite(pin9, LOW);
    digitalWrite(pin10, LOW);
    
    // Now turn ON the right segments for each number
    switch(num) {
        case 0:
            digitalWrite(pin2, HIGH); // a
            digitalWrite(pin1, HIGH); // b
            digitalWrite(pin7, HIGH); // c
            digitalWrite(pin9, HIGH); // d
            digitalWrite(pin10, HIGH); // e
            digitalWrite(pin4, HIGH); // f
            // g stays OFF
            break;
            
        case 1:
            digitalWrite(pin1, HIGH); // b
            digitalWrite(pin7, HIGH); // c
            break;
            
        case 2:
            digitalWrite(pin2, HIGH); // a
            digitalWrite(pin1, HIGH); // b
            digitalWrite(pin5, HIGH); // g
            digitalWrite(pin10, HIGH); // e
            digitalWrite(pin9, HIGH); // d
            break;
            
        case 3:
            digitalWrite(pin2, HIGH); // a
            digitalWrite(pin1, HIGH); // b
            digitalWrite(pin7, HIGH); // c
            digitalWrite(pin9, HIGH); // d
            digitalWrite(pin5, HIGH); // g
            break;
            
        case 4:
            digitalWrite(pin4, HIGH); // f
            digitalWrite(pin5, HIGH); // g
            digitalWrite(pin1, HIGH); // b
            digitalWrite(pin7, HIGH); // c
            break;
            
        case 5:
            digitalWrite(pin2, HIGH); // a
            digitalWrite(pin4, HIGH); // f
            digitalWrite(pin5, HIGH); // g
            digitalWrite(pin7, HIGH); // c
            digitalWrite(pin9, HIGH); // d
            break;
            
        case 6:
            digitalWrite(pin2, HIGH); // a
            digitalWrite(pin4, HIGH); // f
            digitalWrite(pin5, HIGH); // g
            digitalWrite(pin7, HIGH); // c
            digitalWrite(pin9, HIGH); // d
            digitalWrite(pin10, HIGH); // e
            break;
            
        case 7:
            digitalWrite(pin2, HIGH); // a
            digitalWrite(pin1, HIGH); // b
            digitalWrite(pin7, HIGH); // c
            break;
            
        case 8:
            digitalWrite(pin2, HIGH); // a
            digitalWrite(pin1, HIGH); // b
            digitalWrite(pin7, HIGH); // c
            digitalWrite(pin9, HIGH); // d
            digitalWrite(pin10, HIGH); // e
            digitalWrite(pin4, HIGH); // f
            digitalWrite(pin5, HIGH); // g
            break;
            
        case 9:
            digitalWrite(pin2, HIGH); // a
            digitalWrite(pin1, HIGH); // b
            digitalWrite(pin7, HIGH); // c
            digitalWrite(pin9, HIGH); // d
            digitalWrite(pin4, HIGH); // f
            digitalWrite(pin5, HIGH); // g
            break;
    }
}

void loop() {
    for(int i = 0; i <= 9; i++) {
        displayNumber(i);
        delay(1000); // Wait 1 second before next number
    }
}