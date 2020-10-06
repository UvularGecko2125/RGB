int button1;
void RGB(int r,int g,int b){
  analogWrite(9,r);
  analogWrite(10,g);
  analogWrite(11,b);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}
void loop() {\
  // put your main code here, to run repeatedly:
   button1=digitalRead(2);
   if(button1 == 1)
      RGB(90,20,50);
   }
