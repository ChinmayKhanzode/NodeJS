# include <ESP8266WiFi.h>
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);                 // to start serial monitor
  WiFi.begin("ckkkk","connected");

  while(WiFi.status() != WL_CONNECTED)
  {
    Serial.print("1.");
    delay(300); 
  }
  
  Serial.println();
  Serial.println("Node BHai is Connected to Wifi");
  Serial.println(WiFi.localIP());
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
}
