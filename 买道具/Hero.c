#include <stdio.h>
#include <stdlib.h>
#include "Hero.h"
#include <string.h>


tool malltool[40]=
{
    { "safd",999,"asfasf",2},
    { "步靴",230,"能使人物拥有最高上限的速度",4},
    { "传送",100,"传送至地图任意位置",8},
    { "热血铠甲",886,"使攻击者减速并沉默一段时间",2},
    { "船长的遗物",360,"装备后扩大视野范围并可以知道太阳的位置",3},
    { "冥王之剑",889,"使被攻击者失明一段时间",1},
    { "三叉戟",220,"无特效",10}
};
player playerme= {"陈梓豪",1000,{ "航帅的诅咒",999,"在巨大的范围内召唤死亡紫光消灭范围内所有怪物",2}};

void show()
{

    int i;
     printf("*************商城******************\n");
     printf("名称\t\t价格\t\t库存\n");
    for(i=0;i<9;i++)
    {


        printf("%-8s\t%-5d\t\t%d\n",malltool[i].name,malltool[i].price,malltool[i].amount);
    }
     printf("********************************\n");

 printf("**************%s的背包 金币$%d  \n",playerme.name,playerme.money);
     printf("名称\t\t价格\t\t数量\n");
    for(i=0;i<9;i++)
    {


        printf("%-8s\t%-5d\t\t%d\n",playerme.tool[i].name,playerme.tool[i].price,playerme.tool[i].amount);
    }
     printf("**********************************\n");
}
void buy()
{
    char choose[10];
    int i;
    printf("输入你要购买的道具名称");
    scanf("%s",choose);

    for(i=0;i<10;i++)
    {
     if(strcmp(malltool[i].name,choose)==0)
     {
         if(playerme.money>=malltool[i].price)
         {printf("你确定花费%d金币购买%s(y or n)?\n",malltool[i].price,malltool[i].name);
         printf("效果：%s\n",malltool[i].intro);
         if(getch()=='y')
         {
         playerme.money-=malltool[i].price;
         malltool[i].amount-=1;
         playerme.tool[i].name=malltool[i].name;
         playerme.tool[i].price=malltool[i].price;
         playerme.tool[i].amount+=1;
         break;
         }
         }
         else
         {
             printf("金币不足！请充值\n");
             addition();
             break;

         }

     }
    }

}
void addition()
{
        int m;


        printf("请输入充值数目");
        scanf("%d",&m);
        playerme.money +=  m;

}


