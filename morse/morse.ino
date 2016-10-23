// Instance Variables
int unit = 250;
int motorPin = 5;
int motorSpeed = 160;

void setup() {
    Serial.begin(9600);
    pinMode(motorPin, OUTPUT);
}

void loop() {
    // printing
    if (Serial.available() > 0) {
        int incomingByte = Serial.read();

        // make everything uppercase
        if (incomingByte <= 122 && incomingByte >= 97) {
            incomingByte = incomingByte - 32;
        }

        if (incomingByte == 32) {
            space();
        }

        if (incomingByte == 65) {
            a();
            charspace();
        }

        if (incomingByte == 66) {
            b();
            charspace();
        }

        if (incomingByte == 67) {
            c();
            charspace();
        }

        if (incomingByte == 68) {
            d();
            charspace();
        }

        if (incomingByte == 69) {
            e();
            charspace();
        }

        if (incomingByte == 70) {
            f();
            charspace();
        }

        if (incomingByte == 71) {
            g();
            charspace();
        }
        
        if (incomingByte == 72) {
            h();
            charspace();
        }

        if (incomingByte == 73) {
            i();
            charspace();
        }

        if (incomingByte == 74) {
            j();
            charspace();
        }

        if (incomingByte == 75) {
            k();
            charspace();
        }

        if (incomingByte == 76) {
            l();
            charspace();
        }

        if (incomingByte == 77) {
            m();
            charspace();
        }

        if (incomingByte == 78) {
            n();
            charspace();
        }

        if (incomingByte == 79) {
            o();
            charspace();
        }

        if (incomingByte == 80) {
            p();
            charspace();
        }

        if (incomingByte == 81) {
            q();
            charspace();
        }

        if (incomingByte == 82) {
            r();
            charspace();
        }

        if (incomingByte == 83) {
            s();
            charspace();
        }

        if (incomingByte == 84) {
            t();
            charspace();
        }

        if (incomingByte == 85) {
            u();
            charspace();
        }

        if (incomingByte == 86) {
            v();
            charspace();
        }

        if (incomingByte == 87) {
            w();
            charspace();
        }

        if (incomingByte == 88) {
            x();
            charspace();
        }

        if (incomingByte == 89) {
            y();
            charspace();
        }

        if (incomingByte == 90) {
            z();
            charspace();
        }

        if (incomingByte == 48) {
            zero();
            charspace();
        }

        if (incomingByte == 49) {
            one();
            charspace();
        }

        if (incomingByte == 50) {
            two();
            charspace();
        }

        if (incomingByte == 51) {
            three();
            charspace();
        }

        if (incomingByte == 52) {
            four();
            charspace();
        }

        if (incomingByte == 53) {
            five();
            charspace();
        }

        if (incomingByte == 54) {
            six();
            charspace();
        }

        if (incomingByte == 55) {
            seven();
            charspace();
        }

        if (incomingByte == 56) {
            eight();
            charspace();
        }

        if (incomingByte == 57) {
            nine();
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
    analogWrite(motorPin, motorSpeed);
    gap();
    analogWrite(motorPin, 0);
}

void dash() {
    int unit_dash = unit * 3;
    analogWrite(motorPin, motorSpeed);
    for (int i = 0; i < 3; i++) {
        gap();
    }
    analogWrite(motorPin, 0);
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

void one() {
    dot();
    gap();
    
    dash();
    gap();
    
    dash();
    gap();
    
    dash();
    gap();
    
    dash();
}

void two() {
    dot();
    gap();
    
    dot();
    gap();
    
    dash();
    gap();
    
    dash();
    gap();
    
    dash();
}

void three() {
    dot();
    gap();
    
    dot();
    gap();
    
    dot();
    gap();
    
    dash();
    gap();
    
    dash();
}

void four() {
    dot();
    gap();
    
    dot();
    gap();
    
    dot();
    gap();
    
    dot();
    gap();
    
    dash();
}

void five() {
    dot();
    gap();
    
    dot();
    gap();
    
    dot();
    gap();
    
    dot();
    gap();
    
    dot();
}

void six() {
    dash();
    gap();
    
    dot();
    gap();
    
    dot();
    gap();
    
    dot();
    gap();
    
    dot();
}

void seven() {
    dash();
    gap();
    
    dash();
    gap();
    
    dot();
    gap();
    
    dot();
    gap();
    
    dot();
}

void eight() {
    dash();
    gap();
    
    dash();
    gap();
    
    dash();
    gap();
    
    dot();
    gap();
    
    dot();
}

void nine() {
    dash();
    gap();
    
    dash();
    gap();
    
    dash();
    gap();
    
    dash();
    gap();
    
    dot();
}

void ten() {
    dash();
    gap();
    
    dash();
    gap();
    
    dash();
    gap();
    
    dash();
    gap();

    dash();
}

void zero() {
    dash();
}

