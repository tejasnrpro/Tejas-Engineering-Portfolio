const int led = 13, btn = 2;

int minD = 50, maxD = 1000;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if (!digitalRead(btn)) {
    unsigned long t = millis();
    while (!digitalRead(btn));
    int d = constrain(map(millis() - t, 0, 5000, maxD, minD), minD, maxD);

    Serial.print("Delay: ");
    Serial.println(d);

    for (int i = 0; i < 10; i++) {
      digitalWrite(led, HIGH); delay(d);
      digitalWrite(led, LOW);  delay(d);
    }
  }
}