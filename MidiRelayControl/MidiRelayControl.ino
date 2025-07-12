const int relaisPin1 = 13;
const int relaisPin2 = 12;
const int relaisPin3 = 14;
const int relaisPin4 = 27;
const int relaisPin5 = 26;
 
void setup() {
  pinMode(relaisPin1, OUTPUT);
  pinMode(relaisPin2, OUTPUT);
  pinMode(relaisPin3, OUTPUT);
  pinMode(relaisPin4, OUTPUT);
}
 
void loop() {
  digitalWrite(relaisPin1, HIGH);
  digitalWrite(relaisPin2, LOW);
  digitalWrite(relaisPin3, HIGH);
  digitalWrite(relaisPin4, LOW);
  delay(3000);
  digitalWrite(relaisPin1, LOW);
  digitalWrite(relaisPin2, HIGH);
  digitalWrite(relaisPin3, LOW);
  digitalWrite(relaisPin4, HIGH);
  delay(500);
  digitalWrite(relaisPin1, HIGH);
  digitalWrite(relaisPin2, LOW);
  digitalWrite(relaisPin3, LOW);
  digitalWrite(relaisPin4, LOW);
  delay(500);
  digitalWrite(relaisPin1, LOW);
  digitalWrite(relaisPin2, HIGH);
  digitalWrite(relaisPin3, LOW);
  digitalWrite(relaisPin4, LOW);
  delay(500);
  digitalWrite(relaisPin1, LOW);
  digitalWrite(relaisPin2, LOW);
  digitalWrite(relaisPin3, HIGH);
  digitalWrite(relaisPin4, LOW);
  delay(500);
  digitalWrite(relaisPin1, LOW);
  digitalWrite(relaisPin2, LOW);
  digitalWrite(relaisPin3, LOW);
  digitalWrite(relaisPin4, HIGH);
  delay(500);
}
