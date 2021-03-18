int pin1 = 9;
int delay_time = 500;
int brightness1 = 30;
int brightness2 = 100;
int brightness3 = 255;

void setup() {
  // put your setup code here, to run once:
pinMode(pin1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(pin1, brightness1);
delay(delay_time);

analogWrite(pin1, brightness2);
delay(delay_time);

analogWrite(pin1, brightness3);
delay(1000);
}
