#/usr/bin/env python

import serial
import os
from time import sleep

ser = serial.Serial('/dev/tty.usbmodem1411', 9600)
training_set = "lfyqbj"

ser.write('A')

# for letter in training_set:
#     ser.write(letter)


first = "Welcome to the morse code training session. To learn morse code, you will be learning the phrase: {}.".format(training_set)
second = "You will learn each word in the phrase one at a time."
third = "You will cycle through each character in a word 50 times."

print(first)
os.system("say {}".format(first))
print(second)
os.system("say {}".format(second))
print(third)
os.system("say {}".format(third))

for word in training_set.split():
    print("'The current word is: {}'".format(word))
    os.system("say 'The current word is: {}'".format(word))
    for letter in word * 50:
        print(letter)
        os.system("say '{}'".format(letter))
        ser.write(letter)
        sleep(3.50)

# while True:
#     x = raw_input("Enter a sentence: ")
#     for letter in x:
#         print(letter)
#         os.system("say '{}'".format(letter))
#         ser.write(letter)
#         sleep(4.5)
