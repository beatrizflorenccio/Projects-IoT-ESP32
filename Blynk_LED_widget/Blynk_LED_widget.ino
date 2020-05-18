#include <Blynk.h>
#include <BlynkSimpleEsp32.h>
#include <WiFi.h>
#include <WiFiClient.h>

//token do projeto
  char auth[] = "fCLxsyG9zhk-f5yI_z8JQJCOYv1A6c4c";

//credenciais da rede
  char ssid[] = "MJVE";
  char pass[] = "pituca2019";

const int redPin = 13;
const int greenPin = 12;
  
WidgetLED ledred(V13);
WidgetLED ledgreen(V12);

BlynkTimer timer;

boolean redState = false;
boolean greenState = false;

void buttonLedWidget() {
  boolean isPressed = (digitalRead(redPin)== HIGH);
  boolean Pressed = (digitalRead(greenPin) == HIGH);

  if (isPressed != redState) {
    ledred.on();
  }

  else {
    ledred.off();
  }

   if (Pressed != greenState) {
    ledgreen.on();
  }

  else {
    ledgreen.off();
  }
}

void setup() {
 Serial.begin(115200);
 Blynk.begin(auth, ssid, pass);

 timer.setInterval(500L, buttonLedWidget);

}

void loop() {
  // put your main code here, to run repeatedly:

 
  Blynk.run();
  timer.run();

}
