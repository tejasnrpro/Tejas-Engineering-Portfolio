void setup() {
  Serial.begin(9600);
}
//range of x in radians 0-63
void loop() {
  for (int x = 0; x < 63; x++)
    ;
  float y = float(x) / 10;
  Serial.println(sin(y));
}
