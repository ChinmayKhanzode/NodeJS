void setup() {
  // put your setup code here, to run once:
  pinMode (D4,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(".");
  digitalWrite(D4,HIGH);
  delay(1000);
  digitalWrite(D4,LOW);
  delay(1000);
}
