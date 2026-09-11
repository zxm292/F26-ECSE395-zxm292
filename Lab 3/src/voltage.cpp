#include <Arduino.h>

// Declare the function prototype used to convert voltage
float voltage(float analogvalue);

// Connect the potentiometer's output pin to analog input A1
const int sensorPin = A1;

void setup() {
    //Setup serial communication for 115200
    Serial.begin(115200);
}

void loop() {
    // zxm292 - read the raw analog value from A1 and store the integer 0–4095 reading in sensorValue
    int sensorValue = analogRead(sensorPin);
    // zxm292 - Converts the stored reading to approximate voltage and results saved to sensorVoltage
    float sensorVoltage = voltage(sensorValue);

    // zxm292 - Print the calculated voltage to the serial monitor
    Serial.println(sensorVoltage);

    // zxm292 - wait 100 milliseconds between readings, increased from the original value of 50ms
    delay(100); 
}

// Function to calculate output voltage
float voltage(float analogvalue){

    //Declare variable type
    float voltage;

    
    //zxm292 - Apply the formula provided by manual: voltage = analog reading × reference voltage / maximum reading.
    // use the formula with assumed reference voltage of 3.3 V and a maximum analog value of 4095
    voltage = (analogvalue * 3.3f) / 4095.0f;

    //Return the calculated voltage
    return voltage;
} 