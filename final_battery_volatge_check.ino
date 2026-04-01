const int analogPin = A0;
float voltage;
const float Battery_Voltage = 2.1;                                                                                                                                               void setup() {
  Serial.begin(9600);
  pinMode(analogPin, INPUT); // Optional but clarifies pin use
}

void loop() {
  int analogValue = analogRead(analogPin);
  voltage = (analogValue*Battery_Voltage/ 1023.0) * Battery_Voltage;                                                                           if (voltage > 0.01){                                                                                                                                                                        Serial.print("voltage: ");
    Serial.println(voltage, 3);
  } else {
    Serial.println("No valid input detected");
  }
  delay(1000);
}