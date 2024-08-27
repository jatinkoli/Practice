int RED = 2;
int Green = 4;
int Blue = 3;
int Yellow = 5;
int x = 7;
int y = 5;
int a = 3;
int b = 4;



void setup() {
  // put your setup code here, to run once:#
  pinMode(RED, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Blue, OUTPUT);

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

  if(a<b){
    digitalWrite(Yellow, HIGH);
    digitalWrite(Blue, LOW);

  }
  else{
    digitalWrite(Blue, HIGH);
    digitalWrite(Yellow, LOW);

  }
}


