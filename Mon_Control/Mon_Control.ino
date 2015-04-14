//IR Setup
#include <IRremote.h>

int RECV_PIN = 3;
IRrecv irrecv(RECV_PIN);
decode_results irResults;
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

//This is where Mon_Setup ended/./.


/*
//Get variables from Mon_Setup
//Ir values results
//Debug and monitor tests
extern int debugIR;
extern int samsungTest;
extern int asusTest;

// Variables for Samsung Monitor
extern int samsungInputPin;
extern int samsungPowerPin;

//Variables for Thin Asus Monitor
extern int asusTPower;
extern int asusTInput;
extern int asusTMenu;
extern int asusTUp;
extern int asusTDown;
extern int asusTOther;
*/


void loop() {
  if (irrecv.decode(&irResults)) {
    if(debugIR == 1 && samsungTest != 1 && asusTest != 1){    
      // If IR debug is on print IR Values IN Hex and put in the if's below
      Serial.println(irResults.value, HEX); 
    }
    
    interperetIR(irResults.value);
    irrecv.resume(); // Receive the next value
  }
  //Samsung Button Test
  if(samsungTest == 1){
    SamsungMonTest();
  } 
  //Asus Button Test 
  if(asusTest == 1){
    AsusMonTest();
  }
  
  delay(1500);
 
}

void interperetIR(int valueIR){
  
     //FF key for my IR Remote
    if(valueIR == 222028317){
       //Push a button or combo of buttons
    }
    //ReWind key
    else if(valueIR == 2878553538){
       //Push another button 
    }
    else{
       //if your here you 
       if(debugIR == 1 && samsungTest != 1 && asusTest != 1){
          Serial.println("The above value is not recongnized. \n If you wish to use it, write it down and add it to the interperetIR function"); 
       } 
    }
  
}
