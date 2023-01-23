
#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

// Set these to run example.
#define FIREBASE_HOST "iotfirebase-6e8d9-default-rtdb.firebaseio.com"
#define FIREBASE_AUTH "UCMSrv6pb6Los8LUOLJxsDsa9NWSZtoawrQypSdF"
#define WIFI_SSID "ckkkk"
#define WIFI_PASSWORD "connected"


const int relay1 = D4;

void setup() {
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(relay1, OUTPUT);
  
  Serial.begin(9600);

  // connect to wifi.
  WiFi.begin("ckkkk","connected");
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print("1.");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Serial.print("Firebase OK");
  //Firebase.setInt("ledDb",0);// making a variable in database
  //Firebase.setInt("ledpin1",0);
  //Firebase.setInt("ledpin2",0);
  //Firebase.setInt("ledpin3",0);
  //Firebase.setInt("ledpin5",0);
  Serial.print("Led variable made");
}
int ledDb;
int ledpin1;
int ledpin2;
int ledpin3;
int ledpin5;
int c;


void loop() {
  // put your main code here, to run repeatedly:
  ledDb = Firebase.getInt("ledDb");
  delay(200);

  //ledpin1 = Firebase.getInt("ledpin1");
  //ledpin2 = Firebase.getInt("ledpin2");
  


  Serial.print("Fetched variable to console");

  (ledDb>0) ? digitalWrite(relay1,LOW):digitalWrite(relay1,HIGH);
  

  //if(ledDb==1)
  //{
    //digitalWrite(relay1,LOW);
    //Serial.print("\n Led4 High");
  //}
  //else
  //{
    //digitalWrite(relay1,HIGH);
    //Serial.print("\nLed4 Low");
    //}
}
  
 
