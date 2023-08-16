#include <Arduino.h>

void setup() { Serial.begin(9600); }

void loop() {
  int sensorValue = analogRead(PIN_A0);

  Serial.println(sensorValue);

  delay(1);
}
