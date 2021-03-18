
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
  
  digitalWrite(11, HIGH);    // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(11, LOW);
  delay(100);
  digitalWrite(11, HIGH);    // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(11, LOW);
  delay(100);

  
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(100);  

}
