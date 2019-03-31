#include <FastLED.h>
#define NUM_LEDS 15
CRGB leds[NUM_LEDS];
#define DATA_PIN 5
#define BUTTON_PIN 4
int buttonState = 0;

void setup()                 
{
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
  pinMode(BUTTON_PIN, INPUT);
}

void loop()
{
  buttonState = digitalRead(BUTTON_PIN);
  
  if (buttonState == LOW) {
    leds[0] = CRGB::White; FastLED.show();
    
  } else {
    leds[0] = CRGB::Red; FastLED.show();
  }
}
