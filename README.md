工作一
功能:RGB亮起(紫色)
輸出腳:9(紅) 10(綠) 11(藍)
數值:red(180) green(0) blue(180)
```c++
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
```
照片
