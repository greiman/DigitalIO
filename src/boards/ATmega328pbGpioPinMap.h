/* ATmega328 Pin Mapping as supported by MiniCore
 * https://github.com/MCUdude/MiniCore
 */
#ifndef ATmega328pbGpioPinMap_h
#define ATmega328pbGpioPinMap_h
static const GpioPinMap_t GpioPinMap[] = {
  GPIO_PIN(D, 0),  // D0
  GPIO_PIN(D, 1),  // D1
  GPIO_PIN(D, 2),  // D2
  GPIO_PIN(D, 3),  // D3
  GPIO_PIN(D, 4),  // D4
  GPIO_PIN(D, 5),  // D5
  GPIO_PIN(D, 6),  // D6
  GPIO_PIN(D, 7),  // D7
  GPIO_PIN(B, 0),  // D8
  GPIO_PIN(B, 1),  // D9
  GPIO_PIN(B, 2),  // D10
  GPIO_PIN(B, 3),  // D11
  GPIO_PIN(B, 4),  // D12
  GPIO_PIN(B, 5),  // D13
  GPIO_PIN(C, 0),  // D14
  GPIO_PIN(C, 1),  // D15
  GPIO_PIN(C, 2),  // D16
  GPIO_PIN(C, 3),  // D17
  GPIO_PIN(C, 4),  // D18
  GPIO_PIN(C, 5),  // D19
  GPIO_PIN(B, 6),  // D20 (Only available if no external crystal is used)
  GPIO_PIN(B, 7),  // D21 (Only available if no external crystal is used)
  GPIO_PIN(C, 6),  // D22 (Only available if reset pin has been disabled)
  GPIO_PIN(E, 0),  // D23
  GPIO_PIN(E, 1),  // D24
  GPIO_PIN(E, 2),  // D25
  GPIO_PIN(E, 3)   // D26
};
#endif  // ATmega328pbGpioPinMap_h
