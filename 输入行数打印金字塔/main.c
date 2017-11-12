#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int fab(int n);
int main()
{
    int j,k=1,b,i;
    printf("输入金字塔的行数：");
    scanf("%d",&j);
    for(;j>0;j--)
    {

        for(b=j;b>0;b--)
        {
           Sleep(30);
            printf(" ");
        }
        for(i=0;i<k;i++)
        {
            Sleep(30);
            printf("*");
        }
        printf("\n");
        k+=2;

    }

scanf("%d",&i);

    return 0;
}

