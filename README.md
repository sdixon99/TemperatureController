TemperatureController
=====================

Arduino compatible PID based temperature controller.


This controller has been used to control both hot plates and toaster ovens for reflow soldering.  It has also been used for a few other tasks involving temperature control.

The sensor most often used is a modified Harbor Freight IR thermometer which works well for sensing the temperature of a hot plate surface.  The design includes an optional K type thermocouple interface which is more suitable for temperature sensing in a toaster oven (and liquids, etc).

The original design used a MAX6675 thermocouple interface chip.  The code for that design is checked in under tag v1_2.  However, this chip is now end-of-life and has been replaced by the MAX31855.  The latest software and hardware files support the MAX31855.  The MAX31855 is a 3.3V chip so the V1.5 design incorporates 5V to 3.3V level shifting using the pull-ups and diodes design from the Adafruit [breakout board](http://adafruit.com/products/269).

For more information on the earlier design and some additional construction details, see my [blog](http://dorkbotpdx.org/blog/scott_d/installing_the_temperature_controller_code) and the additional information linked there.

The firmware is derived from the [Bare Bones Coffee Controller](http://playground.arduino.cc/Main/BarebonesPIDForEspresso), some standard Arduino libraries and a couple of non-standard libraries (which are included in the libs subdirectory).  

[Pete Skeggs](https://github.com/plskeggs) has modified the firmware to more carefully control the PID timing loop and has gotten good results with a toaster oven.  Note that his code is for the V1.2 board (MAX6675).  It shouldn't be hard to update to the V1.5 design based on the MAX31855.

Non-standard Arduino libraries used (snapshots in libs subdirectory):

RotaryEncoder, written by SunboX: [http://www.arduino.cc/cgi-bin/yabb2/YaBB.pl?num=1205879808]().  The version in libs is updated for Arduino 1.0.

max6675 by Ryan McLaughlin: [http://code.google.com/p/max6675-arduino-library]())

max31855, by Ryan McLuahghlin: [http://ryanjmclaughlin.com/wiki/MAX31855_Arduino_Library]()