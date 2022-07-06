int pinRead = A0;
void setup() {
  pinMode(pinRead, INPUT);
  Serial.begin(9600);
}

void loop() {
  int readV = analogRead(pinRead);
  float V = (5.0 / 1023.0) * readV;
  Serial.print("V is: ");
  Serial.println(V);
  delay(1000);
}
