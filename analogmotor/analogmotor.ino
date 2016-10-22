// Instance Variables
int motorPin = 3;



void setup() {
    pinMode(motorPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int speed = 60;
    analogWrite(motorPin, speed);
    delay(1000);
    speed = 0;
    analogWrite(motorPin, speed);
    delay(1000);
}
