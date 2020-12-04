#include <mDash.h>
#include <WiFi.h>

#define WIFI_NETWORK "MJVE" // SSID wifi
#define WIFI_PASSWORD "pituca2019" // Senha wifi
#define DEVICE_PASSWORD "2nvgZUeF0Sum74JyQRWUJQ" // Token do dispositivo no mDash
#define MDASH_APP_NAME "MinimalApp"

void setup() {
  Serial.begin(115200);
  WiFi.begin(WIFI_NETWORK, WIFI_PASSWORD);
  mDashBegin(DEVICE_PASSWORD);
}

void loop() {
  delay(100);
}
