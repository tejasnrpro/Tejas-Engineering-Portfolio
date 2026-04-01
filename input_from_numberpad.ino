#include <Keypad.h>
const int EN = 12;
const int IN1 = 10;
const int IN2 = 11;
 const byte ROWS = 4; // four rows
const byte COLS = 4; // three columns
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] ={2,3,4,5}; // Arduino pins connected to rows
byte colPins[COLS] ={6,7,8,9} ;    // Arduino pins connected to columns

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup(){
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(EN, OUTPUT);     // Set EN as OUTPUT
  Serial.begin(9600);
  char KEY
;}

void loop(){
  char KEY = keypad.getKey();
  if(KEY != NO_KEY){
    switch(KEY) {
    case 0:
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    analogWrite(EN, 0); 
      
    break;
    case 5:
    analogWrite(EN,100);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    
    break;
    case 8:
    analogWrite(EN,150);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    
    break;
    case 2:
    analogWrite(EN,250);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    
    break;
    case 3:
    analogWrite(EN, 100);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    break;
    case 6:
    analogWrite(EN, 150);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    break;
    case 9:
    analogWrite(EN, 250);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    break;
    default:
    Serial.println("Invalid key");
    break;
    }}
    
}
