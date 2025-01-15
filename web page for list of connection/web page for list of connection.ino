#include <ESP8266WiFi.h>

WiFiServer Server(80);

void setup(){
  Server.begin(115200);
}

void D_AP_SER_Page() {
  int Tnetwork=0,i=0,len=0;
  String st="",s="";
  Tnetwork = WiFi.scanNetworks();//Scan for total networks available
  st = "<ul>";
  for (int i = 0; i < Tnetwork; ++i){
    // Print SSID and RSSI for each network found
    st += "<li>";
    st += i + 1;
    st += ": ";
    st += WiFi.SSID(i);
    st += " (";
    st += WiFi.RSSI(i);
    st += ")";
    st += (WiFi.encryptionType(i) == ENC_TYPE_NONE)?" ":"*";
    st += "</li>";
  }
  st += "</ul>";
  IPAddress ip = WiFi.softAPIP();             //Get ESP8266 IP Adress
  //String ipStr = String(ip[0]) + '.' + String(ip[1]) + '.' + String(ip[2]) + '.' + String(ip[3]);
  s = "\n\r\n<!DOCTYPE HTML>\r\n<html><h1> Metro Store</h1> ";
  //s += ipStr;
  s += "<p>";
  s += st;
  s += "<form method='get' action='a'><label>SSID: </label><input name='ssid' length=32><label>Paswoord: </label><input name='pass' length=64><input type='submit'></form>";
  s += "</html>\r\n\r\n";
  Server.begin();    
  Server.send( 200 , "text/html", s);
  WiFi.scanComplete();
}

void loop(){
  //
}