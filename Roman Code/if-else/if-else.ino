int LEDPin = 13;
int VPin = A0;
void setup() {
  
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  // Get voltage values from the potentiometer
  int readV = analogRead(VPin);
  float V = (5.0/1023.0) * readV;

  // If the value is more than 3V light LED and print warning
  if(V > 3.0){
    // LED to light more as Voltage increases
    // Find difference between 5 and V
    float diff = V - 3.0;
    // Do diff * 255 / 2 and pass value as analogWrite to LED
    int VLED = diff * (255.0 / 2.0);
    analogWrite(LEDPin, VLED);
    
    Serial.print("VOLTAGE IS DANGEROUSLY HIGH!  ");
    Serial.println(V);
  }
  // Else turn off LED and print sth
  else{
    digitalWrite(LEDPin, LOW);
    Serial.print("Safe Voltage level: ");
    Serial.println(V);
  }
  // Delay
  delay(1000);
}
