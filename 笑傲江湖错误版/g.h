#ifndef G_H_INCLUDED
#define G_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "beauty.h"

typedef struct MAP
{
    int id;
    char *name;
    char intro[10];
    int limitlevel;//玩家进入的最低的等级
//坐标

};

typedef enum pro
{
    weapon,armor,con

}pro;

typedef struct tool
{
    int id;
    char name[10];
    int level;
    int amount;
    int price;
    pro type;
    union{
      int attack;
      int defence;
      int power;

    };
    char intro[100];
} tool;


void show();//显示地图
void showwelcome();
void showdata();
void clsdata();
void showplayer()
#endif // G_H_INCLUDED
