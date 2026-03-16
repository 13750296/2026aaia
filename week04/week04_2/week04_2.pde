//week04-2好玩的程式設計 Processing for(迴圈+if(判斷)
//Ctrl-N可開新的視窗來寫程式
void setup(){ //視窗大小800*200
  size(800,200);
}
void draw(){//畫圖的函式
  for(int x=0;x<800;x+=100){//fot(迴圈)
    //Too;-色彩選擇器,可以選擇你要的色彩,再copy複製,再Ctrl-V貼
    //下面的if是判斷mouse的X座標,是否夾在X...X+100中間
    if(x<mouseX&&mouseX<x+100)fill(#1EBC3C);
    else fill(#B94949);
    rect(x,0,100,100);
 }
}
