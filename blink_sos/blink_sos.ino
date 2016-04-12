// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for(int x=0; x<3; x++){
 digitalWrite(13, HIGH); // sets the LED on
 delay(250); // waits for 150ms
 digitalWrite(13, LOW); // sets the LED off
 delay(100); // waits for 100ms
 }
 
 // 100ms delay to cause slight gap between letters
 delay(250);
 
 
 for (int x=0; x<3; x++) {
 digitalWrite(13, HIGH); // sets the LED on
 delay(700); // waits for 400ms
 digitalWrite(13, LOW); // sets the LED off
 delay(100); // waits for 100ms
 }
 
 // 100ms delay to cause slight gap between letters
 delay(250);
 
 for (int x=0; x<3; x++) {
 digitalWrite(13, HIGH); // sets the LED on
 delay(250); // waits for 150ms
 digitalWrite(13, LOW); // sets the LED off
 delay(100); // waits for 100ms
 }
 // wait 5 seconds before repeating the SOS signal
 delay(3000);
}
