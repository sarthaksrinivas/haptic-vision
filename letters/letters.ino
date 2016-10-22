// Instance Variables
int unit = 250;

void setup() {
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    a();
    space();
    // printing
    if (Serial.available() > 0) {
        int incomingByte = Serial.read();

        if (incomingByte <= 122 && incomingByte >= 97) {
            incomingByte = incomingByte - 32;
        }        
        
        Serial.print("I received ");
        Serial.println(incomingByte, DEC);
    }
}

void gap() {
    delay(unit);
}

void dot() {
    digitalWrite(LED_BUILTIN, HIGH);
    gap();
    digitalWrite(LED_BUILTIN, LOW);
}

void dash() {
    int unit_dash = unit * 3;
    digitalWrite(LED_BUILTIN, HIGH);
    for (int i = 0; i < 3; i++) {
        gap();
    }
    digitalWrite(LED_BUILTIN, LOW);
}

void next_char() {
    for (int i = 0; i < 3; i++) {
        gap();
    }
}

void space() {
    for (int i = 0; i < 7; i++) {
        gap();
    }
}

void a() {
    dot();
    gap();
    dash();
}

