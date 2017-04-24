#include<SoftwareSerial.h>

#define rxPin 0
#define txPin 1
#define ledPin 13

SoftwareSerial xbee(rxPin, txPin)

void setup() {
  // put your setup code here, to run once:
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  xbee.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
<<<<<<< HEAD
  while((xbee.available())!)
  {
    xbee.print("B");
  }

  if(xbee.read == "A") 
=======
 if(xbee.read == "A") 
>>>>>>> origin/master
  {
    digitalWrite(ledPin,HIGH);
    delay(700);
    digitalWrite(ledPin,LOW);
    delay(700);
    digitalWrite(ledPin,HIGH);
    delay(700);
    digitalWrite(ledPin,LOW);
<<<<<<< HEAD
=======
    delay(1000);
    xbee.write("B");
>>>>>>> origin/master
  }
}
