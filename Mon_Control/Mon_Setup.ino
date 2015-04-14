//IR Setup
#include <IRremote.h>
//#include <Print.h>
int RECV_PIN = 3;
extern IRrecv irrecv(RECV_PIN);
extern decode_results irResults;
/* debugIF 0 (off) or 1 (on)
 uses serial terminal to print the button pushed and
 print IR values recived (HEX). Use this to find values 
 for your specific IR remote and replace values in the 
 Mon_Control File.
*/
extern int debugIR = 0;

//Monitor Tests 0 (off) or 1 (on)
//Will not run IR or debugIR with either test on
extern int samsungTest = 0;
extern int asusTest = 0;


// Variables for Samsung Monitor
extern int samsungInputPin = 4;
extern int samsungPowerPin = 5;

//Variables for Thin Asus Monitor
extern int asusTPower = 6;
extern int asusTInput = 7;
extern int asusTMenu  = 8;
extern int asusTUp    = 9; // also controls brightnest
extern int asusTDown  = 10; // also controls contrast
//????
extern int asusTOther = 11;

void setup() {

  if(debugIR == 1 || samsungTest == 1 || asusTest == 1){ 
      Serial.begin(9600);  //Start Serial for Debug Print
       if(asusTest == 1){
           String asusPrint = "Asus Power button on:" + asusTPower;
           asusPrint += "\t Asus Input button on:"  + asusTInput;
           Serial.println(asusPrint);
           
           asusPrint = "Asus menu button on:" + asusTMenu +  
           asusPrint += "\t Asus Up button on:" + asusTUp;
           Serial.println(asusPrint);
           
           Serial.println("Asus Down button on:" + asusTDown);
      } else if(samsungTest == 1){
            Serial.println("Samsung Power button on:" + samsungPowerPin);
            Serial.println("Samsung Input button on:" + samsungInputPin);
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
