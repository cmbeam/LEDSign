#include <FastLED.h>

#define NUM_STRIPS 3
#define NUM_LEDS_PER_STRIP 60
#define NUM_LEDS NUM_LEDS_PER_STRIP * NUM_STRIPS

CRGB leds[NUM_STRIPS * NUM_LEDS_PER_STRIP];


void setup() {
  // tell FastLED there's 60 leds on pin 10, starting at index 0 in the led array
  FastLED.addLeds<NEOPIXEL, 10>(leds, 0, NUM_LEDS_PER_STRIP);

  // tell FastLED there's 60  leds on pin 11, starting at index 60 in the led array
  FastLED.addLeds<NEOPIXEL, 11>(leds, NUM_LEDS_PER_STRIP, NUM_LEDS_PER_STRIP);

  // tell FastLED there's 60  leds on pin 12, starting at index 120 in the led array
  FastLED.addLeds<NEOPIXEL, 12>(leds, 2 * NUM_LEDS_PER_STRIP, NUM_LEDS_PER_STRIP);

}

void loop() {
  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Red;
    FastLED.show();
    leds[i] = CRGB::Green;
    delay(100);
  }
}
