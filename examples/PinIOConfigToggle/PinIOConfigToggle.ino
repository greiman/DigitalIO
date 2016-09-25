// Test the config() and toggle() functions.
#ifdef __AVR__
#include "DigitalIO.h"

// Set runtime pin number.
PinIO pin13(13);

void setup() {
  // set mode to OUTPUT and level LOW
  pin13.config(OUTPUT, LOW);
}
void loop() {
  pin13.toggle();
  delay(100);
  pin13.toggle();
  delay(400);
}
#else  // __AVR__
#error AVR only example
#endif  // __AVR__