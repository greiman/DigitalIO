#ifndef ATtiny85GpioPinMap_h
#define ATtiny85GpioPinMap_h

#ifndef NUM_DIGITAL_PINS
#define NUM_DIGITAL_PINS 6
#endif

// ATtiny85 and 45
static const GpioPinMap_t GpioPinMap[] = {
  {&DDRB, &PINB, &PORTB, 0},  // B0  0
  {&DDRB, &PINB, &PORTB, 1},  // B1  1
  {&DDRB, &PINB, &PORTB, 2},  // B2  2
  {&DDRB, &PINB, &PORTB, 3},  // B3  3
  {&DDRB, &PINB, &PORTB, 4},  // B4  4
  {&DDRB, &PINB, &PORTB, 5},  // B5  5
};
#endif  // ATtiny85GpioPinMap_h
