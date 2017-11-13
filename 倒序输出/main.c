#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

   int i;
   int co, cou;//待交换数和位数
   int result=0;
   double change;

   scanf("%d%d",&co,&cou);
   for(i=cou-1;i>-1;i--)
{
    change=co%10;
    co=(co-change)/10;
    change*=pow(10,i);
    result+=change;

}
     printf("%d",result);
    return 0;
}
