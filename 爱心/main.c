#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int i,b;
    printf("   ******       ******\n");
    printf("  ********     ********\n");
    printf(" **********   **********\n");
    printf("************ ************\n");
    printf(" *********** *********** \n");
     for(i=1;i<14;i++)
     {
         for(b=0;b<i*2;b++)
         {
             printf(" ");
         }
         for(b=0;b<25-i*4;b++)
         {
             printf("*");
         }
        printf("\n");
     }

    return 0;


}
