#include <stdio.h>
#include <string.h>
int main()
{
    char pnum[8];
    char change[200000][10];
    int i,j,k;



    while(scanf("%d",&k)==0&&k>200000)
        ;

    for(j=0;j<k;j++)
    {
    scanf("%s",pnum);
    for(i=0;i<10;i++)
    {
        if(pnum[i]=='A'||pnum[i]=='B'||pnum[i]=='C')
                pnum[i]='2';
       if(pnum[i]=='D'||pnum[i]=='E'||pnum[i]=='F')
                pnum[i]='3';
        if(pnum[i]=='G'||pnum[i]=='H'||pnum[i]=='I')
                pnum[i]='4';
        if(pnum[i]=='J'||pnum[i]=='K'||pnum[i]=='L')
                pnum[i]='5';
        if(pnum[i]=='M'||pnum[i]=='N'||pnum[i]=='O')
                pnum[i]='6';
        if(pnum[i]=='P'||pnum[i]=='R'||pnum[i]=='S')
                pnum[i]='7';
        if(pnum[i]=='T'||pnum[i]=='U'||pnum[i]=='V')
                pnum[i]='8';
        if(pnum[i]=='W'||pnum[i]=='X'||pnum[i]=='Y')
                pnum[i]='9';
    }
       strcpy(change[j],pnum);
    }
    for(i=0;i<200000;i++)
    {

    printf("%s\n",change[i]);

    }



printf("No duplicates\n");

    return 0;
}
