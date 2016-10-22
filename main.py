#/usr/bin/env python
import serial
import os
from time import sleep
ser = serial.Serial('/dev/tty.usbmodem1411', 9600)

while True:
    x = raw_input("Enter a sentence: ")
    for letter in x:
        print(letter)
        os.system("say '{}'".format(letter))
        ser.write(letter)
        sleep(4.75)
