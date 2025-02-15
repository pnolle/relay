const int relaisPin1 = 13;
const int relaisPin2 = 12;
const int relaisPin3 = 14;
const int relaisPin4 = 27;
const int relaisPin5 = 26;

#define PIEZO_PIN 33  // Analog pin for piezo
 
void setup() {
  Serial.begin(115200);
    
  pinMode(relaisPin1, OUTPUT);
  pinMode(relaisPin2, OUTPUT);
  pinMode(relaisPin3, OUTPUT);
  pinMode(relaisPin4, OUTPUT);
  
//  pinMode(PIEZO_PIN, OUTPUT);
  pinMode(PIEZO_PIN, INPUT);
  
  digitalWrite(relaisPin1, LOW);
  digitalWrite(relaisPin2, LOW);
  digitalWrite(relaisPin3, LOW);
  digitalWrite(relaisPin4, LOW);
}
 
void loop() {

// piezo buzz
//  tone(PIEZO_PIN, 1000); // 1 kHz tone
//  delay(500); // Buzz for 500ms
//  noTone(PIEZO_PIN); // Stop buzzing
//  delay(500); // Wait before buzzing again

// read piezo sensor analog
  int sensorValue = analogRead(PIEZO_PIN); // Read piezo signal

  if (sensorValue > 50) {  // Adjust threshold based on readings
      Serial.print("Piezo activated! Value: ");
      Serial.println(sensorValue);
  }
  
  delay(5);  // Reduce delay to capture fast pulses

// read piezo sensor digital
//  int sensorValue = digitalRead(PIEZO_PIN); // Read as digital (0 or 1)
//  if (sensorValue == HIGH) {
//      Serial.println("Piezo activated!");
//  }
//  delay(10);

//  digitalWrite(relaisPin1, HIGH);
//  digitalWrite(relaisPin2, LOW);
//  delay(450);
//  digitalWrite(relaisPin1, LOW);
//  digitalWrite(relaisPin2, LOW);
//  delay(50);
}
