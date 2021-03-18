int pin1 = 13;
int pin2 =11;
int pin3 = 9;


void setup() {
  // put your setup code here, to run once:
pinMode(pin1, OUTPUT);
pinMode(pin2, OUTPUT);
pinMode(pin3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //1
digitalWrite(pin1, HIGH);
delay(1000);
digitalWrite(pin1, LOW);

//2

digitalWrite(pin2, HIGH);
delay(1000);
digitalWrite(pin2, LOW);

//3
digitalWrite(pin1, HIGH);
digitalWrite(pin2, HIGH);
delay(1000);
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);

//4
digitalWrite(pin3, HIGH);
delay(1000);
digitalWrite(pin3, LOW);

//5
digitalWrite(pin1, HIGH);
digitalWrite(pin3, HIGH);
delay(1000);
digitalWrite(pin1, LOW);
digitalWrite(pin3, LOW);

//6
digitalWrite(pin3, HIGH);
digitalWrite(pin2, HIGH);
delay(1000);
digitalWrite(pin3, LOW);
digitalWrite(pin2, LOW);

//7
digitalWrite(pin1, HIGH);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
delay(1000);
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
delay(1000);
}
