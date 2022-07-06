int pinVT = A0;
int pinV23 = A1;
int pinV3 = A3;
void setup() {
  // put your setup code here, to run once:
  pinMode(pinVT, INPUT);
  pinMode(pinV23, INPUT);
  pinMode(pinV3, INPUT);

  Serial.begin(9600);
}

void loop() {
  // Read VT, V23 and V3
  float VT = analogRead(pinVT) * (5.0 / 1023.0);
  float V23 = analogRead(pinV23) * (5.0 / 1023.0);
  float V3 = analogRead(pinV3) * (5.0 / 1023.0);

  // Get V1 by minusing VT and V23
  float V1 = VT - V23;

  // Get V2 by minusing V23 and V3
  float V2 = V23 - V3;

  // Print V1, V2 and V3
  Serial.print("V1 is: ");
  Serial.println(V1);
  Serial.print("V2 is: ");
  Serial.println(V2);
  Serial.print("V3 is: ");
  Serial.println(V3);

  // Delay
  delay(10000);
}
