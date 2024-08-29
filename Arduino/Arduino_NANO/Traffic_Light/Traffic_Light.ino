int red = 2;
int yellow = 3;
int green = 4;


void setup() {
  // put your setup code here, to run once:
  pinMode(red , OUTPUT);
  pinMode(yellow , OUTPUT);
  pinMode(green , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //RED Traffic Light

  digitalWrite(red , HIGH);

  delay(10000);
  digitalWrite(red , LOW);

  //yellow Traffic Light

  digitalWrite(yellow , HIGH);
  delay(2000);
  digitalWrite(yellow , LOW);

  //green Traffic Light

  digitalWrite(green , HIGH);
  delay(5000);
  digitalWrite(green , LOW);
}
