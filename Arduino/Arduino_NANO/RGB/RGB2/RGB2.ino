#define RED_PIN 2
#define GREEN_PIN 3
#define BLUE_PIN 4

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(RED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(RED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(GREEN_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(GREEN_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000); 
  digitalWrite(BLUE_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(BLUE_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000); 
}