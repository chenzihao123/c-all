#include <stdio.h>
#include <stdlib.h>
void move(int amout,char start,char middle,char aim);
void write(char start,char aim);static i=0;
int main()
{

    int amout;


    printf("输入第一根柱子的数量:");
    scanf("%d",&amout);
    move(amout,'1','2','3');
    printf("共运行%d次\n",i);
    return 0;
}
void move(int amout,char start,char middle,char aim)
{
     if (amout==1) write(start,aim);
      else
      {
          move(amout-1,start,aim,middle);
          write(start,aim);
          move(amout-1,middle,start,aim);
      }

}
void write(char start,char aim)
{
    i++;
    //printf("第%d次移动是：第%c根移到%c根\n\n",i,start,aim);




}
