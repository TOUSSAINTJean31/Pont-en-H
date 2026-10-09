const int pinAvant = 9;  
const int pinArriere = 10; 

void setup() {
  pinMode(pinAvant, OUTPUT);
  pinMode(pinArriere, OUTPUT);
}

void loop() {
  digitalWrite(pinArriere, LOW); 
  digitalWrite(pinAvant, HIGH);
  delay(2000);
  
  digitalWrite(pinAvant, LOW);
  digitalWrite(pinArriere, LOW);
  delay(1000);
  
  digitalWrite(pinAvant, LOW); 
  digitalWrite(pinArriere, HIGH);
  delay(2000);
}