void loop() {
  if (irrecv.decode(&results)) {
    if(debugIR == 1){     // If IR debug is on print IR Values IN Hex convert to decimal and put in the if
      Serial.println(results.value, HEX); 
    }
    //FF key for my IR Remote
    if(results.value == 222028317){
     //Push a button
    }
    //ReWind key
    if(results.value == 2878553538){
     //Push Another button 
    }
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
