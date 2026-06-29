const int soundPin = 34;
void setup(){
  Serial.begin(115200);
  analogReadResolution(12);
}
void loop() {
  int value = analogRead(soundPin);
  float voltage = value *(3.3/4095.0);
  float dB = 0;
  if(voltage>0.01){
    dB = 20 * log10(voltage/0.6) + 50;
    dB = constrain(dB, 20, 120);
  }
  Serial.print("ADC:");
  Serial.print(value);
  Serial.print(" | dB:");
  Serial.println(dB); 
  delay(200);
}