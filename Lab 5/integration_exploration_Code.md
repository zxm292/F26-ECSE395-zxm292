## Lab #5 Code
```C++
// zxm292
// Touch Sensor - Tap Tap Light
#include <Arduino.h>

// zxm292 - connects to ESP32 input pin
const int sensorPin = A1;

// zxm292 - Connects to respective pins on ESP32: GPIO33,27,12 and - to GND
const int redPin   = 33;
const int greenPin = 27;
const int bluePin  = 12;

// zxm292 - Current RGB LED state 0 = Off, 1 = Red, 2 = Green, 3 = Blue
int currentColor = 0;

// zxm292 - Configed to detect new touch input
int previousSensorValue = LOW;

// zxm292 - Debounce variables - To prevent one touch from being counted many times
unsigned long lastTouchTime = 0;

const unsigned long debounceDelay = 300;

// zxm292 - function to control RGB LED Module 
void setColor(int red, int green, int blue)
{
    digitalWrite(redPin, red);
    digitalWrite(greenPin, green);
    digitalWrite(bluePin, blue);
}

// zmx292 - Determines and sets the LED status using if and else if statements
void updateLED()
{
    // zxm292 - Check if LED is off
    if (currentColor == 0)
    {
        // zxm292 - LED is Off
        setColor(LOW, LOW, LOW);

        Serial.println("LED Off");
    }
    // zxm292 - Check if LED should be red
    else if (currentColor == 1)
    {
        // zxm292 - LED is now Red
        setColor(HIGH, LOW, LOW);

        Serial.println("LED is now Red");
    }
    // zxm292 - Check if LED should be green
    else if (currentColor == 2)
    {
        // zxm292 - LED is now Green
        setColor(LOW, HIGH, LOW);

        Serial.println("LED is now Green");
    }
    // zxm292 - Check if LED should be blue
    else if (currentColor == 3)
    {
        // zxm292 - LED is now blue 
        setColor(LOW, LOW, HIGH);

        Serial.println("LED is now Blue");
    }
}

// zxm292 - Setup serial communication between components and ESP32 board
void setup()
{
    // zxm292 - Setup serial communication
    Serial.begin(115200);

    // zxm292 - Touch sensor configured as input
    pinMode(sensorPin, INPUT);

    // zxm292 - RGB LED pins configured as outputs
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);

    // zxm292 - system begins with off mode
    setColor(LOW, LOW, LOW);

    Serial.println("Tap Tap Light Initiated");
    Serial.println("Touch to change LED color");
}

void loop()
{
    // zxm292 - Check if touch sensor output is HIGH or LOW
    int sensorValue = digitalRead(sensorPin);

    // zxm292 - This if condition statement check for new touch input signals that prevents the sensor changing colors continuously
    if (sensorValue == HIGH && previousSensorValue == LOW)
    {
        // zxm292 - Debounce check
        if (millis() - lastTouchTime > debounceDelay)
        {
            Serial.println("Touch detected!");

            // zxm292 - Increase currentColor index
            currentColor++;

            // zxm292 - after Blue, return to Off
            if (currentColor > 3)
            {
                currentColor = 0;
            }
            // Change the RGB LED
            updateLED();

            // zxm292 - record when the touch occurred
            lastTouchTime = millis();
        }
    }

    // zxm292 - if sensor is LOW, no touch is currently detected
    if (sensorValue == LOW && previousSensorValue == HIGH)
    {
        Serial.println("Touch has been released.");
    }

    // zxm292 - current sensor value saved for the next loop
    previousSensorValue = sensorValue;

    // zxm292 - delay between sensor checks
    delay(10);
}
```
