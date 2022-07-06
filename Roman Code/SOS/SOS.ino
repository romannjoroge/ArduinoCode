void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int fast = 50;  // The fast burst
  int slow = 500;  // The slow burst
  
  // 3 quick bursts for an S
  for (int i = 0; i < 3; i++){
    digitalWrite(13, HIGH);
    delay(fast);
    digitalWrite(13, LOW);
    delay(fast);
  }
  delay(1000);
  // 3 long bursts for an O
  for (int i = 0; i < 3; i++){
    digitalWrite(13, HIGH);
    delay(slow);
    digitalWrite(13, LOW);
    delay(slow);
  }
  delay(1000);
  // Another S
  for (int i = 0; i < 3; i++){
    digitalWrite(13, HIGH);
    delay(fast);
    digitalWrite(13, LOW);
    delay(fast);
  }
  delay(2000);
}
