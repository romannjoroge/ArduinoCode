void setup() {
  // put your setup code here, to run once:

  // Telling arduino what port to use 
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Send a signal to the red bulb, then the green one and 
  // finally the blue
  int red = 13;
  int blue = 12;
  int green = 11;

  // Turns on red
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);

  // Turns on blue
  digitalWrite(blue, HIGH);
  delay(500);
  digitalWrite(blue, LOW);

  // Turns on green
  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(green, LOW);
}
