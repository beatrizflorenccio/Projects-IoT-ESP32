
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <TimeLib.h>
#include <WidgetRTC.h>

//token do projeto
char auth[] = "H-Dcer4VCTaGQOulODabR_NUO535LcXw";

BlynkTimer timer;

WidgetMap mapa(V2);
WidgetLED sts(V0);
WidgetRTC rtc;

char ssid[] = "MJVE"; /* coloque aqui o nome da rede wi-fi que o ESP32 deve se conectar */
char pass[] = "pituca2019"; /* coloque aqui a senha da rede wi-fi que o ESP32 deve se conectar */

#define BLYNK_GREEN "#23C48E"
#define BLYNK_RED "#D3435C"

void blinkLedWidget() {
  if (WiFi.status() == WL_CONNECTED) sts.setColor(BLYNK_GREEN);
  else sts.setColor(BLYNK_RED);
 
}


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  WiFi.begin(ssid, pass);
  Blynk.begin(auth, ssid, pass);

  sts.on();

  timer.setInterval(1000L, blinkLedWidget);
    
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
  timer.run();

}
