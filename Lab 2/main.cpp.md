## Code

```C++
#include <Arduino.h>

// This is required in PlatformIO but hidden in the standard Arduino IDE.
#define LED_PIN 13

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200); // Start the Serial connection
}
void loop()
{
  // Customized text output in terminal
  Serial.println("Hello World - esp32! Let's see if we could have a light show!"); // Print the words to the Serial Monitor.

  // Modify LED blinking pattern to make something creative!
  digitalWrite(LED_PIN, HIGH); // LED On
  delay(200); // Last for 0.2 seconds
  digitalWrite(LED_PIN, LOW); // LED Off
  delay(800); // Last for 0.8 seconds
}
```
