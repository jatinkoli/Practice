int LEDS[7] = {2,3,4,5,6,7,8};

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDS, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 2 ; i<9 ; i++){
    digitalWrite(i, HIGH);
    delay(1000);

  }
}
