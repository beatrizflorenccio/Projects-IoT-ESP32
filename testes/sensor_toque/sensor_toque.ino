//Sensor de toque capacitivo
//ESP32 possui 10 sensores de toque capacitivos internos. Esses sensores estão conectados à alguns GPIOs
//GPIOs 4(T0), 0(T1), 2(T2), 15, 13, 12, 14, 27, 33, 32(T9)

#define TOUTCH_PIN T6 //ESP32 pino D14
#define LED 13 //ESP32 pino D13

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  Serial.println("Sensor de toque capacitivo");
  

}

void loop() {

  int touch_read = touchRead(TOUTCH_PIN);
  //Serial.println(touch_read);

  if (touch_read < 60) {
    digitalWrite(LED, HIGH);
  }

  else {
    digitalWrite(LED, LOW);
  }

}
