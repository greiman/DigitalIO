Restructured for future use of Arduino Library Manager.

PinIO and I2C classes are only supported on AVR.

For detailed documentation see the html files.

The functions in this library do not clear PWM mode for pins.

Clearing PWM mode for each call has a high overhead and does not address the
fact that pins can be in other special modes such as Serial, I2C, or SPI.

The DigitalPin class provides very fast in-line functions. DigitalPin is a
template base class and pin numbers must be specified at compile time.
For 328 pins and low address Mega pins, read() and write() execute in two
cycles or 125 ns for a 16 MHz CPU.  Fast static functions similar to the
Arduino digitalRead and digitalWrite functions are also included.

The PinIO class has runtime pin numbers. It has member variables to
store the pin's bit mask and port address so it is slower than the
DigitalPin class.

PinIO has two versions of write. PinIO::writeI() must be used with
interrupts disabled since it will not be atomic if interrupts are
enabled.  PinIO::writeI() is faster than the PinIO::write() function.

PinIO::write() can be used with interrupts enabled or disabled.

A software SPI class is included in SoftSPI.h.  The only
example for SoftSPI is a scope test for development.

Two software I2C classes are included.  SoftI2cMaster runs at 100 kHz
and FastI2cMaster runs at 400 kHz. The SoftDS1307Utility example demonstrates
these classes.

The DigitalIO/examples directory has these programs:

DigitalPinBlink - Create object for pin 13 in output mode and demo toggle().

DigitalPinConfigToggle - Demonstrate the config() and toggle() member functions.

DigitalPinReadWrite - Read pin 12 and write pin 13 using DigitalPin.

DigitalPinShiftOut - Scope test for fast shiftOut function.

GpioPinMap - Generate a GpioPinMap file for a new board.

PinIOBegin - Use begin to assign pin numbers.

PinIOConfigToggle - Test the PinIO config() and toggle() functions.

PinIOReadWrite - Use PinIO to read pin 12 and write the value to pin 13.

ScanI2cBus - Scan I2C bus for devices.

SoftDS1307Utility - Utility sketch to explore DS1307 using software I2C Master.

testArduino - Scope timing test using Arduino digitalWrite function.

testDigitalPin - Scope timing test using DitialPin high()/low() functions.

testFastDigital - Scope test for static fastDigital functions.

testPinIO - Scope test for PinIO class write timing.

testSoftSPI - Scope test for SoftSPI class.
