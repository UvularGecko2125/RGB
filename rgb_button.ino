int button0;
int button1;
int button2;
int count = 0;
void RGB(int i,int x,int y)
{
pinMode (i,OUTPUT);
analogWrite(i,x);
   x = x-y;
   if(x ==0 || x ==255)
   y = -y;
   delay(80); 
}

void rgb(int r,int g,int b)
{
    analogWrite(9,r);
    analogWrite(10,0);
    analogWrite(11,0);
    delay(500);
    analogWrite(9,0);
    analogWrite(10,g);
    analogWrite(11,0);
    delay(500);
    analogWrite(9,0);
    analogWrite(10,0);
    analogWrite(11,b);
    delay(500);
}

void setup() {
  // put your setup code here, to run once:
  for(int i=9;i<=12;i++)
  pinMode(i,OUTPUT);
  pinMode(1,INPUT);
  pinMode(2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  button0=digitalRead(1);
  button1=digitalRead(2);
  button2=digitalRead(3);

    analogWrite(9,0);
    analogWrite(10,0);
    analogWrite(11,0);
  
  if(button0 == 1){
    analogWrite(9,255);
    analogWrite(10,255);
    analogWrite(11,0);}
  if(button1 == 1){
    rgb(180,180,180);}
  if(button2 == 1){
    RGB(9,180,5);
  }
}















      
