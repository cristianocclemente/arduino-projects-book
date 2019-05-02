int switchState = 0;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  switchState = digitalRead(2);
  
  if (switchState == LOW) { // the button IS NOT pressed
    digitalWrite(3, HIGH); // green LED
    digitalWrite(4, LOW);  // red LED
    digitalWrite(5, LOW);  // red LED
  }

  else { // the button IS pressed
    digitalWrite(3, LOW);  // green LED
    digitalWrite(4, LOW);  // red LED
    digitalWrite(5, HIGH); // red LED

    // wait for a quarter second
    delay(250);
    
    // toggle the (red) LEDs
    digitalWrite(4, HIGH); // red LED
    digitalWrite(5, LOW);  // red LED

    // wait for a quarter second
    delay(250);
  }
} // go back to the beggining of the loop
