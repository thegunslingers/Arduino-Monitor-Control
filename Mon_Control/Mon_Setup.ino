//IR Setup
#include <IRremote.h>
int RECV_PIN = 3;
IRrecv irrecv(RECV_PIN);
decode_results results;
/* debugIF 0 (off) or 1 (on)
 uses serial terminal to print the button pushed and
 print IR values recived (HEX). Use this to find values 
 for your specific IR remote and replace values in the 
 Mon_Control File.
*/
int debugIR = 0;

//Monitor Tests 0 (off) or 1 (on)
//Will not run IR or debugIR with either test on
int samsungTest = 0;
int asusTest = 0;


// Variables for Samsung Monitor
int samsungInputPin = 4;
int samsungPowerPin = 5;

//Variables for Thin Asus Monitor
int asusTPower = 6;
int asusTInput = 7;
int asusTMenu  = 8;
int asusTUp    = 9; // also controls brightnest
int asusTDown  = 10; // also controls contrast
//????
int asusTOther = 11;

void setup() {

  if(debugIR == 1 || samsungTest == 1 || asusTest == 1){ 
      Serial.begin(9600);  //Start Serial for Debug Print
      if(samsungTest == 1 || asusTest == 1)
           Serial.println("Asus Power button on: %d\t Asus Input button on: %d\n", asusTPower, asusTInput);
           Serial.println("Asus menu button on: %d\t Asus Up button on: %d\n", asusTMenu, asusTUp);
           Serial.println("Asus Down button on: %d\n", asusTDown);
      }
  }
  irrecv.enableIRIn(); // Start the receiver
  
  pinMode(samsungPowerPin, OUTPUT);
  pinMode(samsungInputPin, INPUT);
  //digitalWrite(samsungInputPin, LOW);

  pinMode(asusTPower, OUTPUT);
  pinMode(asusTInput, OUTPUT);
  pinMode(asusTMenu, OUTPUT);
  pinMode(asusTUp, OUTPUT);
  pinMode(asusTDown, OUTPUT);
  pinMode(asusTOther, OUTPUT);
}
