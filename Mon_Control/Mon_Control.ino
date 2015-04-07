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
  //Asus Button Test 
  
  //delay(1000);
  PushButtonAsus(asusTPower);
  //PushButtonAsus(asusTInput);
  //PushButtonAsus(asusTMenu);
  //PushButtonAsus(asusTUp);
  //PushButtonAsus(asusTDown);
  //PushButtonAsus(asusTOther);
  delay(1500);
 
 /* Samsung Monitor Buttons Test 
 
 delay(7000);
 digitalWrite(samsungPowerPin,HIGH);
 delay(1500);
 digitalWrite(samsungPowerPin,LOW);
 delay(1500);  
 digitalWrite(samsungPowerPin,HIGH);
 PushButtonInputSamsung(samsungInputPin);
// min delay to debounce sammy  delay(2500);
 delay(600);
 ReleaseButtonInputSamsung(samsungInputPin);  
 delay(1500);
*/
   
}
