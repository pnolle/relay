
#include "Arduino.h"

void setup() {
  Serial.begin(9600);
  Serial.println("Setup");
}
 
void loop() {
  // usbMIDI.read() needs to be called rapidly from loop().  When
  // each MIDI messages arrives, it returns true. The message must
  // be fully processed before usbMIDI.read() is called again.
  if (usbMIDI.read()) {
    processMIDIt();
  }
}

void processMIDI(void)
{
  byte type = usbMIDI.getType();
  byte channel = usbMIDI.getChannel();
  byte data1 = usbMIDI.getData1();
  byte data2 = usbMIDI.getData2();

  Serial.print("Type: ");
  Serial.print(type, HEX);
  Serial.print(" Ch: ");
  Serial.print(channel);
  Serial.print(" Data1: ");
  Serial.print(data1);
  Serial.print(" Data2: ");
  Serial.println(data2);
}
