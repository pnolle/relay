const int relaisPin1 = 12;
const int relaisPin2 = 27;
const int relaisPin3 = 26;
const int relaisPin4 = 25;
const int relaisPin8 = 33;

void setup() {
  Serial.begin(115200);
  Serial.print("Relays");
  
  pinMode(relaisPin1, OUTPUT);
  pinMode(relaisPin2, OUTPUT);
  pinMode(relaisPin3, OUTPUT);
  pinMode(relaisPin4, OUTPUT);
}
 
void loop() {
  Serial.print("1");
  digitalWrite(relaisPin1, HIGH);
  digitalWrite(relaisPin2, LOW);
  digitalWrite(relaisPin3, LOW);
  digitalWrite(relaisPin4, LOW);
  delay(500);
  digitalWrite(relaisPin1, LOW);
  digitalWrite(relaisPin2, LOW);
  digitalWrite(relaisPin3, LOW);
  digitalWrite(relaisPin4, LOW);
  delay(500);
  Serial.print("2");
  digitalWrite(relaisPin1, LOW);
  digitalWrite(relaisPin2, HIGH);
  digitalWrite(relaisPin3, LOW);
  digitalWrite(relaisPin4, LOW);
  delay(500);
  digitalWrite(relaisPin1, LOW);
  digitalWrite(relaisPin2, LOW);
  digitalWrite(relaisPin3, LOW);
  digitalWrite(relaisPin4, LOW);
  delay(500);
  Serial.print("3");
  digitalWrite(relaisPin1, LOW);
  digitalWrite(relaisPin2, LOW);
  digitalWrite(relaisPin3, HIGH);
  digitalWrite(relaisPin4, LOW);
  delay(500);
  digitalWrite(relaisPin1, LOW);
  digitalWrite(relaisPin2, LOW);
  digitalWrite(relaisPin3, LOW);
  digitalWrite(relaisPin4, LOW);
  delay(500);
  Serial.print("4");
  digitalWrite(relaisPin1, LOW);
  digitalWrite(relaisPin2, LOW);
  digitalWrite(relaisPin3, LOW);
  digitalWrite(relaisPin4, HIGH);
  delay(500);
  digitalWrite(relaisPin1, LOW);
  digitalWrite(relaisPin2, LOW);
  digitalWrite(relaisPin3, LOW);
  digitalWrite(relaisPin4, LOW);
  delay(500);
}
