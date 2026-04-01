const int IN1 = 8;
const int IN2 = 9;
const int EN = 10;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(EN, OUTPUT);     // Set EN as OUTPUT
}

void loop() {
  // Motor forward
  analogWrite(EN, 200);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(1000);

  // Motor stop
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(EN, 0);      // Disable motor
  delay(1000);

  // Motor reverse
  analogWrite(EN, 200);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(1000);

  // Motor stop
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(EN, 0);      // Disable motor
  delay(1000);
}
