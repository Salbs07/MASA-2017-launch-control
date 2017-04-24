#include<SoftwareSerial.h>

#define rxPin 0
#define txPin 1
#define ledPin 13

#SoftwareSerial xbee = SoftwareSerial(rxPin, txPin)

void setup() {
  // put your setup code here, to run once:
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  xbee.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  xbee.print("Jacob hates us");
  delay(666);
}
