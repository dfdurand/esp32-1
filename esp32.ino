#include <WiFi.h>

const char* ssid = "leduo";
const char* password = "17592216";

void setup() {
  Serial.begin(115200);
  delay(1000);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println("connexion.....");

  while(WiFi.status() != WL_CONNECTED){
    Serial.print("..");
    delay(100);
  }

  Serial.println("\nconnecté à un réseau wifi..");
  Serial.print("adresse IP: ");
  Serial.println(WiFi.localIP());


}

void loop() {
  // put your main code here, to run repeatedly:

}
