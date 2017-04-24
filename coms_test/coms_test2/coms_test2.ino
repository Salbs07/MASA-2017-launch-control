#include<SoftwareSerial.h>

#define rxPin 0
#define txPin 1
#define ledPin 13

#SoftwareSerial xbee = SoftwareSerial(rxPin, txPin)

void setup() {
  // put your setup code here, to run once:
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  xbee.begin(9600);
  Serial.begin(9600);
  Serial.println("Starting");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Waiting");
  Serial.println(xbee.read());
}
