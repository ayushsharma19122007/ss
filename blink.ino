
void setup() {
  pinMode(11, OUTPUT);  
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT); // Set pin 9 as an output
}

void loop() {
  digitalWrite(11, HIGH);  // Turn LED ON
  delay(1000);              // Wait for 1 second

  digitalWrite(11, LOW);   // Turn LED OFF
  delay(1000);              // Wait for 1 second
   digitalWrite(10, HIGH);  // Turn LED ON
  delay(1000);              // Wait for 1 second

  digitalWrite(10, LOW);   // Turn LED OFF
  delay(1000);              // Wait for 1 second
   digitalWrite(9, HIGH);  // Turn LED ON
  delay(1000);              // Wait for 1 second

  digitalWrite(9, LOW);   // Turn LED OFF
  delay(1000);              // Wait for 1 second
}