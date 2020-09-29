void setup() {
  // put your setup code here, to run once:
  for(int i=9;i<=12;i++)
  pinMode(i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    analogWrite(9,180);
    analogWrite(10,0);
    analogWrite(11,0);
}
