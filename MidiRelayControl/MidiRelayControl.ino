
#include "Arduino.h"

const int relaisPin1 = 3;
const int relaisPin2 = 4;
const int relaisPin3 = 5;
const int relaisPin4 = 6;
const int relaisPin5 = 7;
const int relaisPin6 = 8;
const int relaisPin7 = 9;
const int relaisPin8 = 10;

void setup() {
  Serial.begin(9600);
  Serial.println("Setup");
  
  pinMode(relaisPin1, OUTPUT);
  pinMode(relaisPin2, OUTPUT);
  pinMode(relaisPin3, OUTPUT);
  pinMode(relaisPin4, OUTPUT);
  pinMode(relaisPin5, OUTPUT);
  pinMode(relaisPin6, OUTPUT);
  pinMode(relaisPin7, OUTPUT);
  pinMode(relaisPin8, OUTPUT);
}
 
void loop() {
  // usbMIDI.read() needs to be called rapidly from loop().  When
  // each MIDI messages arrives, it returns true. The message must
  // be fully processed before usbMIDI.read() is called again.
  if (usbMIDI.read()) {
    processMIDI();
  }
}

void processMIDI(void)
{
  byte type = usbMIDI.getType();
  byte channel = usbMIDI.getChannel();
  byte data1 = usbMIDI.getData1();
  byte data2 = usbMIDI.getData2();

  // Serial.print("Type: ");
  // Serial.print(type, HEX);
  // Serial.print(" Ch: ");
  // Serial.print(channel);
  // Serial.print(" Data1: ");
  // Serial.print(data1);
  // Serial.print(" Data2: ");
  // Serial.println(data2);

  switch (data1) {
    case 48: digitalWrite(relaisPin1, (type == usbMIDI.NoteOn) ? HIGH : LOW); break;
    case 49: digitalWrite(relaisPin2, (type == usbMIDI.NoteOn) ? HIGH : LOW); break;
    case 50: digitalWrite(relaisPin3, (type == usbMIDI.NoteOn) ? HIGH : LOW); break;
    case 51: digitalWrite(relaisPin4, (type == usbMIDI.NoteOn) ? HIGH : LOW); break;
    case 52: digitalWrite(relaisPin5, (type == usbMIDI.NoteOn) ? HIGH : LOW); break;
    case 53: digitalWrite(relaisPin6, (type == usbMIDI.NoteOn) ? HIGH : LOW); break;
    case 54: digitalWrite(relaisPin7, (type == usbMIDI.NoteOn) ? HIGH : LOW); break;
    case 55: digitalWrite(relaisPin8, (type == usbMIDI.NoteOn) ? HIGH : LOW); break;
  }
}
