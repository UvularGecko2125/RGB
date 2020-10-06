工作一<br>
功能:RGB亮起(紫色)<br>
輸出腳:9(紅) 10(綠) 11(藍)<br>
數值:red(180) green(0) blue(180)<br>
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
照片<br>
工作二<br>
功能:RGB版本的呼吸燈<br>
輸出腳:9(紅) 10(綠) 11(藍)[未使用]<br>
數值:初始值(x):180 每秒下降數值():5



```c++
int x =180;

int y =5;

void setup() {

  // put your setup code here, to run once:

  pinMode (9,OUTPUT);

  pinMode (10,OUTPUT);

}

void loop() {

  // put your main code here, to run repeatedly:

   analogWrite(9,x);

   analogWrite(10,x);

   x = x-y;

   if(x ==0 || x ==255)

   y = -y;

   delay(80);

   }
   ```
   照片
