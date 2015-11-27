// Scope test for PinIO class write timing.
//
#ifdef __AVR__
#include "DigitalIO.h"

// Class with runtime pin numbers.
PinIO pin(13);

void setup() {
  // Set mode to OUTPUT.
  pin.mode(OUTPUT);
}
void loop() {
  pin.high();
  pin.low();
  pin.write(1);
  pin.write(0);
  pin.toggle();
  pin.toggle();
  delay(1);
}
#else  // __AVR__
#error AVR only example
#endif  // __AVR__