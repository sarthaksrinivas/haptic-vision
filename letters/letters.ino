// Instance Variables
int unit = 250;

void setup() {
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    // printing
    if (Serial.available() > 0) {
        int incomingByte = Serial.read();

        // make everything uppercase
        if (incomingByte <= 122 && incomingByte >= 97) {
            incomingByte = incomingByte - 32;
        }

        if (incomingByte == 65) {
            a();
            charspace();
        }
        
        Serial.print("I received ");
        Serial.println(incomingByte, DEC);

        incomingByte = 0;

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

void charspace() {
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

void b() {
    dash();
    gap();

    dot();
    gap();

    dot();
    gap();

    dot();
}

void c() {
    dash();
    gap();

    dot();
    gap();

    dash();
    gap();

    dot();
}

void d() {
    dash();
    gap();

    dot();
    gap();

    dot();    
}

void e() {
    dot();
}

void f() {
    dot();
    gap();

    dot();
    gap();
    
    dash();
    gap();

    dot();
}

void g() {
    dash();
    gap();

    dash();
    gap();
    
    dot();
}

void h() {
    dot();
    gap();

    dot();
    gap();

    dot();
    gap();
    
    dot();
}

void i() {
    dot();
    gap();
    
    dot();
}

void j() {
    dot();
    gap();

    dash();
    gap();

    dash();
    gap();

    dash();
}

void k() {
    dash();
    gap();

    dot();
    gap();
    
    dash();
}

void l() {
    dot();
    gap();
    
    dash();
    gap();

    dot();
    gap();

    dot();
}

void m() {
    dash();
    gap();

    dash();
    gap();
}

void n() {
    dash();
    gap();

    dot();
}

void o() {
    dash();
    gap();

    dash();
    gap();

    dash();
}

void p() {
    dot();
    gap();

    dash();
    gap();

    dash();
    gap();

    dot();
}

void q() {
    dash();
    gap();

    dash();
    gap();

    dot();
    gap();

    dash();
}

void r() {
    dot();
    gap();

    dash();
    gap();

    dot();    
}

void s() {
    dot();
    gap();

    dot();
    gap();

    dot();    
}

void t() {
    dash();
}

void u() {
    dot();
    gap();
    
    dot();
    gap();
    
    dash();
}

void v() {
    dot();
    gap();
    
    dot();
    gap();
    
    dot();
    gap();
    
    dash();
}

void w() {
    dot();
    gap();

    dash();
    gap();

    dash();
}

void x() {
    dash();
    gap();
    
    dot();
    gap();
    
    dot();
    gap();
    
    dash();
}

void y() {
    dash();
    gap();
    
    dot();
    gap();
    
    dash();
    gap();
    
    dash();
}

void z() {
    dash();
    gap();
    
    dash();
    gap();
    
    dot();
    gap();
    
    dot();
}


