#include <stdio.h>
#include <stdlib.h>

int main()
{
    int key;
    int num[80]={1,23435,2,442,3,6324,7,5};
    int i,j;
    for(j=1;j<=7;j++)
    {
        i=j-1;
        key=num[j];
        while(key>num[i]&&i>=0)
        {

            num[i+1]=num[i];
            i--;

        }//�������λ��һֱλ��i+1
        //��ѭ���еĲ���һ�㻯
        num[i+1]=key;
    }
    for(i=0;i<8;i++)
    printf("%d\n",num[i]);



    return 0;
}
