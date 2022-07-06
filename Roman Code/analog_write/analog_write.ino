int analog = 13;
int bright0 = 0;
int bright1 = 85;
int bright2 = 170;
int bright3 = 255;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int bright_list[4] = {bright0, bright1, bright2, bright3};

  for (int i = 0; i < 4; i++){
    analogWrite(analog, bright_list[i]);
    delay(1000);
  }
}
