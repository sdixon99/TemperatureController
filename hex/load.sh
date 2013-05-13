avrdude -c usbtiny -B 1 -P usb -p atmega328p -U flash:w:temp_control_1.2.hex
avrdude -c usbtiny -P usb -p atmega328p -U eeprom:w:eeprom.hex
