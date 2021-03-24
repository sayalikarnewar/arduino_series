// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  blink(9); 
  
  for (int i=0; i<2; i++) {
    blink(11);
  }
  
  for (int i=0; i<3; i++) {
    blink(13); 
  }
}

void blink(int p) {         // function to blink a led "p" with delay of 100ms
  digitalWrite(p, HIGH);    // turn the LED on by making the voltage HIGH
  delay(100);
  digitalWrite(p, LOW);     // turn the LED off by making the voltage LOW
  delay(100);
}
