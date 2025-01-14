#include <ESP8266WiFi.h>

//wifi network password and name:
const char* ssid = "Jasmine";
const char* psswd = "butterfly";

//setting web server port no to 80
WiFiServer Server(80);

//current time
unsigned long current_time = millis();

void setup(){
  Serial.begin(115200);
  Serial.print("connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, psswd);
  while (WiFi.status()!= WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }

//print local ip address and start web server
  Serial.println("");
  Serial.println("WiFi Connected.");
  Serial.println("IP Address: ");
  Serial.println(WiFi.localIP());
  Server.begin();
}

//Connect to wifi network with ssid and psswd
void loop(){

}
