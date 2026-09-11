/*#include <Arduino.h>

// function prototype
float voltage(float analogvalue);

// Put your potentiometer pin assignment here
const int sensorPin = A1;

void setup() {
    Serial.begin(115200);
}

void loop() {
    // This is the line for printing in the serial
    int sensorValue = analogRead(sensorPin);
    float sensorVoltage = voltage(sensorValue);
    Serial.println(sensorVoltage);
    delay(100); 
}

// function to calculate output voltage
float voltage(float analogvalue){
    float voltage;
    //analogRead(sensorPin); gives us 0-4095 values
    //use the formula (Analog value*Reference voltage) / (Sensor Resolution) to calculate the output voltage
    voltage = (analogvalue * 3.3f) / 4095.0f;
    return voltage;
} */