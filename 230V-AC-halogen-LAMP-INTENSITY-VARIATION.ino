#define RELAY_PIN 8

int level = 5;
const int cycleTime = 20; // ms

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter intensity level (1-10):");
}

void loop() {

  // Check for input
  if (Serial.available() > 0) {

    int input = Serial.parseInt();


    // Validate input
    if (input >= 1 && input <= 10) {
      level = input;
      Serial.print("Level set to: ");
      Serial.println(level);
    } else {
      Serial.println("Invalid input. Enter 1-10.");
    }
  }

  // Calculate ON/OFF time
  int onTime = (level * cycleTime) / 10;
  int offTime = cycleTime - onTime;

  // Relay switching
  digitalWrite(RELAY_PIN, HIGH);
  delay(onTime);

  digitalWrite(RELAY_PIN, LOW);
  delay(offTime);
}