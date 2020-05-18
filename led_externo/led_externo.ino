#define LED 13

void setup() {
  pinMode(LED, OUTPUT);

}

void loop() {
  delay(300);
  digitalWrite(LED, LOW);
  delay(300);
  digitalWrite(LED, HIGH);

}
