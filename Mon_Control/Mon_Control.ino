void loop() {
  if (irrecv.decode(&results)) {
    if(debugIR == 1){     
      Serial.println(results.value, HEX); //Print IR values in HEX convert to decimals to 
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
    
  //delay(1000);
  PushButtonAsus(asusTPower);
  //PushButtonAsus(asusTInput);
  //PushButtonAsus(asusTMenu);
  //PushButtonAsus(asusTUp);
  //PushButtonAsus(asusTDown);
  //PushButtonAsus(asusTOther);
  delay(1500);
 /* 
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
