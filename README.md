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
![image]()照片<br>
工作二<br>
功能:RGB版本的呼吸燈(黃色)<br>
     由亮轉暗 再由暗轉亮<br>
輸出腳:9(紅) 10(綠) 11(藍)[未使用]<br>
數值:初始值(x):180 每秒下降數值(y):5<br>
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
   ![image]()照片<br>
   工作三<br>
   功能:設定一副程式 在按鈕按下後 RGB亮起(粉色吧? 或是淡紫色我也不知道?)<br>
   輸出腳:9(紅) 10(綠) 11(藍) 輸入腳: 2<br>
   數值:red(90) green(20) blue(50)<br>
```c++
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
   ```
   ![image]()
   
   
   
   
