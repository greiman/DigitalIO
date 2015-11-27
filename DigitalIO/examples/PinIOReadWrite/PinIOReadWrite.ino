// Read pin 12 and write the value to pin 13.
#ifdef __AVR__
#include "DigitalIO.h"

PinIO readPin(12);
PinIO writePin(13);

void setup() {
  // Set input mode and disable pull-up.
  readPin.config(INPUT, LOW);

  // set output mode
  writePin.mode(OUTPUT);
}
void loop() {
  writePin.write(readPin.read());
}
#else  // __AVR__
#error AVR only example
#endif  // __AVR__