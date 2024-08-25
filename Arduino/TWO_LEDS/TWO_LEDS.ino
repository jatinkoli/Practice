int led1 = 3; // define the GREEN LED (first led)
int led2 = 4; // define the RED LED (second led)

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2 , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // GREEN LED (First LED)
  digitalWrite(led1, HIGH);
  delay(20);
  digitalWrite(led1, LOW); 
  delay(200); 

  // RED LED (Second LED)
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW); 
  delay(200);
}
