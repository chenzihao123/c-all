#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define NUM 3
struct student
{
      int mount;
      char  name[10];
      int age;

}stua[NUM],stub[NUM],*p,*q;


int main()
{
    int i;
    FILE *p1;
    p=stua;
    q=stub;
    p1=fopen("1.txt","ab+");
    for (i=0;i<NUM;i++,p++)
    {
      scanf("%d%s%d",&p->mount,p->name,&p->age);
    }

     p=stua;
  fwrite(p,sizeof(struct student),NUM,p1);
     rewind(p1);
     fread(q,sizeof(struct student),NUM,p1);


      printf("%d %s %d\n",(q+2)->mount,(q+2)->name,(q+2)->age);


     fclose(p1);


    return 0;
}
