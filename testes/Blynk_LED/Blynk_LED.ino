#include <Blynk.h>
#include <BlynkSimpleEsp32.h>
#include <WiFi.h>
#include <WiFiClient.h>

//token do projeto
  char auth[] = "fCLxsyG9zhk-f5yI_z8JQJCOYv1A6c4c";

  //credenciais da rede
  char ssid[] = "MJVE";
  char pass[] = "pituca2019";


void setup() {

 Serial.begin(115200);
 Blynk.begin(auth, ssid, pass);

  
}

void loop() {

 Blynk.run();


}
