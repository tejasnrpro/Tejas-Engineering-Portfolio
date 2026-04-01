int x;
int y;
int sum;
void setup() {
  Serial.begin(9600);
  x = 1;
  y = 2;
  sum = x + y;
}

void loop() {
  Serial.println(sum);
}

