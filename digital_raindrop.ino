#define RAINSENSORPIN 4

void setup() {
  Serial.begin(9600);
  pinMode(RAINSENSORPIN, INPUT_PULLUP);
}

void loop() {
  int rainState = digitalRead(RAINSENSORPIN);
  
  if (rainState == LOW) {
    Serial.println("RAIN DETECTED");
  } else {
    Serial.println("NO RAIN");
  }
  
  delay(500);
}