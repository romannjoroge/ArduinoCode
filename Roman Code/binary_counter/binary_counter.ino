// Variables for the pin numbers
int first = 13;  // LSB
int second = 12;
int third = 11 ; // MSB

void setup() {
  // put your setup code here, to run once:
  pinMode(first, OUTPUT);
  pinMode(second, OUTPUT);
  pinMode(third, OUTPUT);

}

void loop() {
  // Create a list of 1s and 0s to represent the binary numbers
  int zero[3] = {0, 0, 0};
  int one[3] = {0, 0, 1};
  int two[3] = {0, 1, 0};
  int three[3] = {0, 1, 1};
  int four[3] = {1, 0, 0};
  int five[3] = {1, 0, 1};
  int six[3] = {1, 1, 0};
  int seven[3] = {1, 1, 1};
  
  // Create a list of the lists
  int **big_list = (int **)malloc(sizeof(int*) * 8);
  big_list[0] = zero;
  big_list[1] = one;
  big_list[2] = two;
  big_list[3] = three;
  big_list[4] = four;
  big_list[5] = five;
  big_list[6] = six;
  big_list[7] = seven; 

  // For every item in the list
  for (int i = 0; i < 8; i++){
    int *small_list = big_list[i];
    // If the first number is 0 third should be low otherwise it is high
    if (small_list[0] == 0){
      digitalWrite(third, LOW);
    }
    else{
      digitalWrite(third, HIGH);
    }
    // If the second number is 0 second should be low otherwise it is high
    if (small_list[1] == 0){
      digitalWrite(second, LOW);
    }
    else{
      digitalWrite(second, HIGH);
    }
    // If the third number is 0 first should be low otherwise it is high
    if (small_list[2] == 0){
      digitalWrite(first, LOW);
    }
    else{
      digitalWrite(first, HIGH);
    }
    // Delay between each number
    delay(1000);
  }

  free(big_list);
}
