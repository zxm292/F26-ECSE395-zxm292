#include <Arduino.h>

//Defining potentiometer pin
#define POTENTIOMETER_PIN A1

const int sensorPin = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {

   // Read and print the potentiometer's raw analog value.
  int sensorValue = analogRead(POTENTIOMETER_PIN);
  Serial.println(sensorValue);
  // Wait 50 ms between readings 
  delay(50);
} 


