#include <stdio.h>
#include <stdlib.h>
//直接n=0;再使用n出错！！！
//oj 有正确代码
int main()
{
    float in;
    int n=2;
    double s=0;
    int i[10];
    int b=0;
while(1)
{

   n=2;
   s=0;
    scanf("%f",&in);
    if(in==0)break;
    if(in<0.01||in>5.20)continue;


    do
    {
        s+=1.0/n;
        n++;

    }while(s<=in);

  i[b]=n-2;
   b++;
}

    for(n=0;n<b;n++)
    {
        printf(" %d card(s)\n",i[n]);
    }
    return 0;
}
