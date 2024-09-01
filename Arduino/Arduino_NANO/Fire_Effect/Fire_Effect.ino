int y = 2;
int r = 3;
int y1 = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(y,OUTPUT);
  pinMode(r,OUTPUT);
  pinMode(y1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(y,random(120)+135);
  analogWrite(r,random(120)+135);
  analogWrite(y1,random(120)+135);
  delay(random(100));

}
