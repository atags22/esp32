//Sample code from
//https://techtutorialsx.com/2017/07/26/esp32-arduino-setting-a-soft-ap/

#include <WiFi.h>

const char* ssid = "esp32tag";
const char* pass = "ardupass";


void setup() {
  //start the serial coms
  Serial.begin(115200);

  //start the AP
  WiFi.softAP(ssid,pass);

  Serial.print("IP: ");
  Serial.println(WiFi.softAPIP());
  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(300);

}
