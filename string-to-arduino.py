#/usr/bin/env python
import serial
ser = serial.Serial('/dev/tty.usbmodem1411', 9600)

while True:
    x = raw_input("Enter a sentence: ")
    for letter in x:
        print(letter)
        ser.write(letter)
