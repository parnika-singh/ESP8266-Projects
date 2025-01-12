#include <ESP8266WiFi.h>



void setup() {
  Serial.begin(115200);
  Serial.println();

  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
}

void loop()
{
  Serial.print("Scan start ... ");
  int n = WiFi.scanNetworks();
  Serial.print(n);
  Serial.println(" network(s) found");
  for (int i = 0; i < n; i++)
  {
    Serial.println(WiFi.SSID(i));
  }
  Serial.println();

  delay(5000);

  //connecting to chosen wifi
  Serial.println("enter ssid: ");
  while (Serial.available()==0){}
  const String ssid=Serial.readString();
  Serial.println("enter password: ");
  while (Serial.available()==0){}
  const String psswd=Serial.readString();
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
  Serial.println("connected and ending");

}