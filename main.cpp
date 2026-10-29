#include<stdio.h>
#include<easyx.h>
int main() {
    initgraph(900, 800); //创建背景
    IMAGE img; //图片变量

    loadimage(&img, _T("background.jpg.png"));   //存储图片的容器，图片的路径，

    putimage(0,0, &img);  //坐标，图片


    system("pause");
    return 0;
}