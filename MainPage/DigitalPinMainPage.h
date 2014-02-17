/* Arduino DigitalIO Library
 * Copyright (C) 2012 by William Greiman
 *
 * This file is part of the Arduino DigitalIO Library
 *
 * This Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This Library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with the Arduino DigitalPin Library.  If not, see
 * <http://www.gnu.org/licenses/>.
 */
/**
@mainpage Arduino %DigitalIO Library
<CENTER>Copyright &copy; 2013 by William Greiman
</CENTER>

@section Intro Introduction

The DigitalIO library has a number of classes and functions for fast
digital I/O for AVR ports plus fast software I2C and SPI.

@section pinToggle Pin Toggle Functions

There are pin toggle functions in the DigitalPin and PinIO classes
and a fastDigitalToggle() function.

These functions use the fast AVR pin toggle feature.

When a "one bit" is written to an AVR port's PIN register, the value of
the same bit in the port's PORT register is toggled.  This provides a fast
hardware assisted toggle function.

@section fastPin Fast Pin I/O

The DigitalPin.h file contains the fastest pin I/O class and functions.
These functions require a constant pin number.

These function execute in two cycle with constant arguments for low address
ports.  On an Uno, two cycles is 0.125 usec.

Port H and higher on the Mega are much slower since bit set and bit clear
instructions are not supported on high address ports.

See @ref digitalPin for detailed documentation.

@section pinIO PinIO with Runtime Pin Numbers

The class PinIO is four to five times faster than the standard
digitalRead() and digitalWrite() functions.  For pin 13 on an Uno, write()
executes in about 0.8 usec and toggle() is faster.  The standard Arduino
digitalWrite() function takes about 4 usec.

This class saves overhead by not disabling PWM mode on each read/write call
and by storing the port register addresses and pin bit mask in
private variables.

@section softSPI Software SPI

The template class SoftSPI uses fast pin I/O to implement a software SPI bus
at about 2 MHz.

@section softI2C Software Master Mode I2C

The two classes FastI2cMaster and SoftI2cMaster implement software
master mode I2C.

FastI2cMaster is a template class and runs at about 400 kHz.

SoftI2cMaster uses runtime pin numbers and runs at about 100 kHz.

*/