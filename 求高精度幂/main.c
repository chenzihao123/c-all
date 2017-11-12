#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double R[4];
    int n[4],i;
    long double a[4];
    for(i=0;i<4;i++)
    {
    printf("输入： ");

    do
    {

       scanf("%lf%d",&R[i],&n[i]);
       if(R[i]>0.0&&R[i]<99.999&&n[i]>0&&n[i]<=25)break;
    }while(1);

    }
    for(i=0;i<4;i++)
    printf("%llf\n",pow(R[i],n[i]));


    return 0;
}
