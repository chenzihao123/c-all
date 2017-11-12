#include <stdio.h>
#include <stdlib.h>
#include "g.h"
#include "beauty.h"
#include <windows.h>
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
