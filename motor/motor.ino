#include <Adafruit_DRV2605.h>
#include <Wire.h>

// Instance Variables
Adafruit_DRV2605 drv;
uint8_t effect = 3;
uint32_t wait = 10;
const int motorPin = 3;

void setup() {
    Serial.begin(9600);
//
//    drv.begin();
//    drv.selectLibrary(1);
//    drv.setMode(DRV2605_MODE_INTTRIG);

    pinMode(motorPin, OUTPUT);
}

void loop() {
    digitalWrite(motorPin, HIGH);
    delay(1000);
    digitalWrite(motorPin, LOW);
    delay(1000);
//    Serial.print("Effect #"); Serial.println(effect);
//    drv.setWaveform(0, effect);
//    drv.setWaveform(1, 0);
//    drv.go();    
    Serial.println("Cycle Finished!");
}
