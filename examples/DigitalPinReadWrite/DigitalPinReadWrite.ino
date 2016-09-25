// Read pin 12 and write value to pin 13.
#include "DigitalIO.h"

DigitalPin<12> pin12;
DigitalPin<13> pin13;

void setup() {
  pin12.mode(INPUT);
  pin13.mode(OUTPUT);
}

void loop() {
  pin13 = pin12;
}