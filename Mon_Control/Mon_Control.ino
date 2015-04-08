void loop() {
  if (irrecv.decode(&results)) {
    if(debugIR == 1 && samsungTest != 1 && asusTest != 1){     // If IR debug is on print IR Values IN Hex and put in the if's below
      Serial.println(results.value, HEX); 
    }
    
    interperetIR()
    irrecv.resume(); // Receive the next value
  }
  //Samsung Button Test
  if(samsungTest == 1){
    SamsungMontTest()
  } 
  //Asus Button Test 
  if(asusTest == 1){
    AsusMonTest()
  }
  
 
  delay(1500);
 
  
}

void interperetIR(){
 
    int valueIR = results.value;
  
     //FF key for my IR Remote
    if(valueIR == 222028317){
     //Push a button or combo of buttons
    }
    //ReWind key
    else if(valueIR == 2878553538){
     //Push another button 
    }
  
}
