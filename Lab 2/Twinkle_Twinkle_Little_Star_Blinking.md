## Code
```C++
#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define RED_LED_PIN 13
#define NEOPIXEL_PIN 0
#define NEOPIXEL_POWER_PIN 2

Adafruit_NeoPixel pixel(1, NEOPIXEL_PIN, NEO_GRB + NEO_KHZ800);

enum Note {
  C_NOTE,
  G_NOTE,
  A_NOTE
};

struct LightNote {
  Note note;
  int duration;
  const char* syllable;
};

LightNote song[] = {
  {C_NOTE, 350,  "Twin"},
  {C_NOTE, 350,  "kle"},
  {G_NOTE, 350,  "twin"},
  {G_NOTE, 350,  "kle"},
  {A_NOTE, 350,  "lit"},
  {A_NOTE, 350,  "tle"},
  {G_NOTE, 2000, "STAR"}  // Two-second ending
};

uint32_t noteColor(Note note) {
  switch (note) {
    case C_NOTE:
      return pixel.Color(255, 0, 0);     // C = red

    case G_NOTE:
      return pixel.Color(0, 0, 255);     // G = blue

    case A_NOTE:
      return pixel.Color(180, 0, 255);   // A = purple
  }

  return pixel.Color(255, 255, 255);
}

void playLightNote(const LightNote &lightNote) {
  Serial.println(lightNote.syllable);

  // Illuminate both LEDs
  digitalWrite(RED_LED_PIN, HIGH);
  pixel.setPixelColor(0, noteColor(lightNote.note));
  pixel.show();

  delay(lightNote.duration);

  // Turn both LEDs off
  digitalWrite(RED_LED_PIN, LOW);
  pixel.clear();
  pixel.show();

  delay(150);
}

void setup() {
  Serial.begin(115200);

  pinMode(RED_LED_PIN, OUTPUT);
  digitalWrite(RED_LED_PIN, LOW);

  // Enable power to the Feather's built-in NeoPixel
  pinMode(NEOPIXEL_POWER_PIN, OUTPUT);
  digitalWrite(NEOPIXEL_POWER_PIN, HIGH);

  pixel.begin();
  pixel.setBrightness(40);
  pixel.clear();
  pixel.show();
}

void loop() {
  for (const LightNote &lightNote : song) {
    playLightNote(lightNote);
  }

  delay(2500);
}
```
