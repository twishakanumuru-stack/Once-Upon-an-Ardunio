void setup() {
  // put your setup code here, to run once:
servo1_180.attach(9);
servo2_180.attach(10);
pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(buttonPin) == HIGH) {
  servo1_180.write(180);
else {
  servo1_180.write(0);
}
}
}
