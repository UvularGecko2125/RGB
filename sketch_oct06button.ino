int button0;
int button1;
void setup() {
  // put your setup code here, to run once:
  pinMode(0,INPUT);
  pinMode(1,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}
void loop() {\
  // put your main code here, to run repeatedly:
  
 button0=digitalRead(0);
 button1=digitalRead(1);
 
if((button0 == 0)&&(button1 == 0))
  analogWrite(9,139);
  analogWrite(10,0);
  analogWrite(11,0);
if((button0 == 0)&&(button1 == 1))
  analogWrite(9,144);
  analogWrite(10,238);
  analogWrite(11,144);
if((button0 == 1)&&(button1 ==0))
  analogWrite(9,0);
  analogWrite(10,0);
  analogWrite(11,139);
if((button0 == 1)&&(button1 == 1))
  analogWrite(9,85);
  analogWrite(10,26);
  analogWrite(11,139);   
   }
