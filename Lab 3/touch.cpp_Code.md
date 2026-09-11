```C++
#include <Arduino.h>

// zxm292 - Connects the touch sensor's signal output to the pin A1
const int sensorPin = A1;

// zxm292 - Define GPIO13 as the LED pin based on the Adafruit ESP32 GPIO Pinout diagram
#define POTENTIOMETER_PIN A1

// Define the onboard LED pin
const int ledPin = 13;

void setup() {
    Serial.begin(115200);

    // zxm292 - touch sensor pin configed as the input
    pinMode (sensorPin, INPUT);
    
    // zxm292 - led pin configed as the output
    pinMode (ledPin, OUTPUT);
}

void loop() {
    // zxm292 - determine if the sensor is under high or low output
    int sensorValue = digitalRead (sensorPin);
        
        // zxm292 - if the sensor is detected at HIGH
        if (sensorValue == HIGH) {
            // zxm292 - return that contact detected 
            Serial.println( "Touch detected! LED on");
            
            // zxm292 - led turned on when contact detected 
            digitalWrite(ledPin, HIGH);
        }
        else {
            // zxm292 - otherwise returns no touch detected 
            Serial.println("No touch detected! LED stays off!");

            // zxm292 - led turns of when touch released
            digitalWrite(ledPin, LOW);
    }
    //zxm292 - wait for 0.15s between checks
    delay (150);
}
```
