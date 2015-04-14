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
