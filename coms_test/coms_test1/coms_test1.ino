#include<SoftwareSerial.h>

#define rxPin 0
#define txPin 1
#define ledPin 13

SoftwareSerial xbee(rxPin, txPin)

void setup() {
  // put your setup code here, to run once:
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  xbee.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin,LOW);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  while((xbee.available())!)
  {
    xbee.print("A");
  }

  if(xbee.read == "B") 
  {
    digitalWrite(ledPin, HIGH);
    delay(700);
    digitalWrite(ledPin, LOW);
    delay(700);
    digitalWrite(ledPin, HIGH);
    delay(700);
    digitalWrite(ledPin, LOW);
  }
}
