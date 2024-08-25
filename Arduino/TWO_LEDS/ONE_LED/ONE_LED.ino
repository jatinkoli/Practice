int led1 = 3; // define the GREEN LED (first led)

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH);
  delay(20);
  digitalWrite(led1, LOW); 
  delay(200); 

}
