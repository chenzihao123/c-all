#include<stdio.h>
#include"Hero.h"
#include<stdlib.h>

/*int id;
    char*name;
    char sex;
    job job;
    double hp;
    double speed;
    abillity abillity;
    pubtime pubtime;*/
     hero heros[5];
     job jobs[]={
     {1,"法师","强大的法术伤害，远程与范围性"},
     {2,"战士","物理输出，与不错的防御"},
     {3,"刺客","快速的位移，高额的伤害"},
     {4,"坦克","强大的防御力"},

                 };
void inputHero()
{
    int i,choose,j;
    for(i=0;i<1;i++)
    {
        printf("请输入第%d英雄的信息\n",i+1);
        heros[i].id=i+1;
        printf("名称：");


        heros[i].name=(char*)malloc(50);
         scanf("%s",heros[i].name);
        printf("性别:");
        fflush(stdin);
        scanf("%c",&heros[i].sex);
        fflush(stdin);

        for(j=0;j<4;j++)
        {
            printf("%s\n",jobs[j].name);
        }
        printf("请选择职业:");
        scanf("%d",&choose);
        heros[i].job=jobs[choose-1];
        printf("%s当前职业：（%s）",heros[i].name,heros[i].job.name);


    }


}
