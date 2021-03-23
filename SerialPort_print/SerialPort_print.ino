int i = 1;
int waitTime = 750;
String s = "i = ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(s);
Serial.println(i);
i = i + 1;
delay(waitTime);

}
