int RED = 2;
int Green = 4;
int x = 7;
int y = 5;



void setup() {
  // put your setup code here, to run once:#
  pinMode(RED, OUTPUT);
  pinMode(Green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(x>y){
    digitalWrite(Green, HIGH);
    digitalWrite(RED, LOW);

  }
  else{
    digitalWrite(RED, HIGH);
    digitalWrite(Green, LOW);

  }

}


