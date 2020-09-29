int x =180;
int y =5;
void setup() {
  // put your setup code here, to run once:
  pinMode (9,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
   analogWrite(9,x);
   x = x-y;
   if(x ==0 || x ==255)
   y = -y;
   delay(80);
   }
   

  
