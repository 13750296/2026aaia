//week05-2//week05-1 好玩的程式設計 兩層for(迴圈)配合if...else if...else
//ctrl-N開新視窗
void setup(){
  size(800,500);
}
void draw(){
  for(int y=0;y<500;y+=50){//外面for迴圈y座標
    for(int x=0;x<800;x+=50){//裡面for迴圈x座標
    if(x<mouseX&&mouseX<x+50)fill(#7C5757);
    else if(y<mouseY&&mouseY<y+50)fill(#7C5757);
    else fill(255);//裡面有三行判斷 決定填充顏色
      rect(x,y,50,50);
    }
  }
}
