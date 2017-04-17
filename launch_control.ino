// include the library code:
#include <Bounce2.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <AltSoftSerial.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal_I2C lcd(0x27,16,2); // set the LCD address to 0x27

//Creates bounce object
for (int i = 3; i < 12; i++)
{
  Bounce ("bouncer" + i) = Bounce();
}

AltSoftSerial altSerial; //set software serial for xbee

//Pin 20 is tied to ground on launcher side
#define checkPin 20

//Launch contoller is the one with buttons
//Launch box sits at the rocket end

void setup() {
  //CHECK THIS!!!
  pinMode(checkPin, INPUT_PULLUP); // sets pin 20 up to check it 
  digitalWrite(checkPin, HIGH);
  
  if (digitalRead(checkPin) == LOW) // If low (True) then it is launch box
  {
    isLaunchController = false;
    // Sets output pins that control relays 
    for(int i = 3; i < 10; i++)
    {
      pinMode(i, OUTPUT);
      digitalWrite(i, HIGH); 
    }
    //Sets input pins for pressure reading
    for(int i = 21; i < 24; i++)
    {
      pinMode(i, INPUT); 
    }
    int 3 = heater;
    int 4 = heater 2;
    int 5 = ignite;
    int 6 = extra;
    int 7 = bleed;
    int 8 = vent;
    int 9 = f1ll;
    int 21 = pressure1;
    int 22 = pressure2;
    int 23 = pressure3;
  }
  else //controller side
  {
    isLaunchController = true;
    // Sets pins connected to buttons
    for(int i = 3; i < 12; i++)
    {
      pinMode(i,INPUT_PULLUP);
      digitalWrite(i, HIGH);
      ("bouncer" + i).attach(i); // remove bouncing
      ("bouncer" + i).interval(5);
    }
    int 3 = heater;
    int 4 = cycle;
    int 5 = heater2;
    int 6  = vent;
    int 7 = extra;
    int 8 = unused;
    int 9 = f1ll;
    int 10 = bleed;
    int 11 = ignite;

  }

void loop() {
  // put your main code here, to run repeatedly:
  if (isLaunchController) // launch controller
  {
    
    
  }
  else //launch box
  {
    
    
  }
}
