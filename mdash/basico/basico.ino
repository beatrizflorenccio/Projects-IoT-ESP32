/* CÓDIGO BÁSICO CONEXÃO ESP32 MDASH
   
   REFERÊNCIA: https://mdash.net/docs/#arduino-ide
*/

#include <mDash.h>
#include <WiFi.h>


#define WIFI_NETWORK "SSID" // SSID wifi
#define WIFI_PASSWORD "PASSWORD" // Senha wifi
#define DEVICE_PASSWORD "TOKEN" // Token do dispositivo no mDash
#define MDASH_APP_NAME "MinimalApp"


void setup() {
  Serial.begin(115200);
  WiFi.begin(WIFI_NETWORK, WIFI_PASSWORD);
  mDashBegin(DEVICE_PASSWORD);
}


void loop() {
  delay(100);
}
