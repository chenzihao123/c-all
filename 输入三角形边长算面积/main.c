#include <stdio.h>
#include <stdlib.h>


int main()
{
    double a,b,c;
    double sin,cos;
    double s;
    printf(" 请分别输入三角形的边长，我来求面积\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    cos=(a*a+b*b-c*c)/(2*a*b);
    sin=pow(1-cos*cos,0.5);
    s=0.5*sin*a*b;
    if(s==0){
        printf("这不是三角形！\n");
        return 0;
    }
    printf("%lf",s);
    return 0;
}




