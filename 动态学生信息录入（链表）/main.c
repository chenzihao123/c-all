#include <stdio.h>
#include <stdlib.h>

struct student
{
    int num,year;

    char name[10];
    struct student *next;
};


int main()
{
    char car;
    int i,b=1;
    struct student *head;
    head=NULL;
    for(i=0;i<b;i++)
    {
        struct student *p,*q;
        p=(struct student*)malloc(sizeof(struct student));

        printf("第%d位同学的姓名与学号",i+1);
        scanf("%s%d",p->name,&p->num);
        if(i==0)
            head=p;
        else
            q->next=p;
        q=p;
        printf("如果还有同学就按下“1”键\n");
      car=getch();
      if(car=='1')
      b++;



    }
    for(i=0;i<b;i++)
    {
      struct  student*q,*w;
      if(i==0)
      {q=head;w=head->next;}
      else
      {

          q=w;
          w=q->next;
      }
        printf("%s\n",q->name);



    }
    return 0;
}
