#include <stdio.h>
#include <stdlib.h>

int main()
{
   int start[3],over[3];//开始与结束的分秒
   double s,o;//等价的小时
    double s2,o2;
   printf(" 分别输入开始的小时分秒按空格分开：");
   scanf("%d%d%d",&start[0],&start[1],&start[2]);
   s=start[0]+start[1]/60.0+start[2]/3600.0;
   printf("分别输入结束的小时分秒：");
   scanf("%d%d%d",&over[0],&over[1],&over[2]);
   o=over[0]+over[1]/60.0+over[2]/3600.0;
   printf("分别输入开始和结束的里程:");
   scanf("%lf%lf",&s2,&o2);
    printf("速度为%.3lfkm/h\n",(o2-s2)/(o-s));

    return 0;
}
