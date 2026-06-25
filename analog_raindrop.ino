#include <Arduino.h>
#define ANALOG_PIN 15
void setup(){
Serial.begin(9600);
analogReadResolution(12);
}
void loop(){
  int analogValue= analogRead(ANALOG_PIN);
  Serial.print("ANALOG:");
  Serial.print(analogValue);
  Serial.print("| Condition:");
    if(analogValue > 3500) {
      Serial.println("No rain/Dry");
    }
    else if(analogValue > 2000){
      Serial.println("Light Moisture");
    }
     else if(analogValue > 1000){
      Serial.println("Moderate Moisture");
    }
    else{
      Serial.println("Raining/Highly wet");
    }
    delay(5000);

}