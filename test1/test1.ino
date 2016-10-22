/*
  Test1
  Set up arduino and write to serial port. This is a test.

  modified 21 Oct 2016
  by Allison Sommers, Sarthak Srinivas
*/


// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600); // set the communication to 9600
}

// the loop function runs over and over again forever
void loop() {
  Serial.write("Hello\n");
  delay(1000);
}
