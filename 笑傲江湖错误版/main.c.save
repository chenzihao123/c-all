#include <stdio.h>
#include <stdlib.h>
#include "g.h"
#include <windows.h>
#include "beauty.h"
int x=3,y=3;
void settitle (char *title)
{
    SetConsoleTitle(title);
}
void setcolor(int forecolor ,int backcolor)
{
    HANDLE winHandle;
    winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(winHandle,forecolor+backcolor*0x10);
}

void setposition(int x, int y)
{


     HANDLE winHandle;
     COORD pos={x ,y};
     winHandle =GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleCursorPosition(winHandle,pos);

}

int x=3,y=3;
int main()
{
    char key;

    settitle("笑傲江湖之精忠报国");
    show();
    showwelcome();
    showdata();
    while(1)
    {


    key=getch();
    if(key=='1'||key=='2'||key=='3'||key=='4')
    {
        switch(key)
    {case '1':
        showplayer();

        break;
    case '2':
        printf("未实现");
        break;
            case '3':printf("未实现");
        break;
            case '4':
               return;
        break;
    }
    }
    else if(key==72)//上
    {
        y--;
    }
        else if(key==77)//右
    {
        x++;
    }    else if(key==80)//下
    {
        y++;
    }    else if(key==75)//左
    {
        x--;
    }
    if(x>7)x=0;
    if(x<0)x=7;
    if(y>7)y=0;
    if(y<0)y=7;


    show();



    }
    printf("游戏结束");
    return 0;
}
