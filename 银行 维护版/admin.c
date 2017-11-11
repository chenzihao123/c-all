#include <stdio.h>
#include "admin.h"
#include <string.h>
static int start_id=10000;
bank* load_bank(char *file)
{
      FILE *fp=fopen(file,"rb");
      if (fp==0)return 0;
      int counter;
      fread(&counter,sizeof(int),1,fp);
      bank*pb=create_bank(counter);
      fread(pb->acs,sizeof(account),counter,fp);
      pb->nu=counter;
      pb->max_nu=counter;
       start_id=pb->acs[pb->nu-1].id;
      return pb;
}
bank *create_bank(int ma)   //创建程序数据
{
    //if(ma<=0)return 0;问题代码！
    bank *pb=(bank*)malloc(sizeof(account));
    pb->acs=(account*)malloc(sizeof(account)*ma);
    pb->nu=0;
    pb->max_nu=ma;
    return pb;



}

void create (bank *pb)
{

     start_id++;
     int id=start_id;
     char name[20];
     char password[20];
     char p[20];
     double balance;
     unsigned char yn;
     a:
     printf("请输入你的真实姓名：");
     scanf("%s",name);
     printf("请输入你的账户密码：");
     scanf("%s",password);
     printf("请确认你的账户密码：");
     scanf("%s",p);
     if(strcmp(p,password)==0)
     {
         balance=0.0;
         printf("确定添加<%s>用户？\n",name);
         yn =getch();
         if(yn=='y')
         {
             account *a =create_account(id,name,password,balance);
             add_account(pb,a);
             printf("创建成功！\n");
         }


     }
     else
     {
         printf("两次输入的密码不一致！\n");
         goto a;
     }



}
account* create_account(int id,char*name,char*password,double balance)
{
    account *a=(account*)malloc(sizeof(account));
    a->id=id;
    strcpy(a->name,name);
    strcpy(a->password,password);
    a->balance=balance;
    return a;




}
add_account(bank*pb,account *a)
{
    if(pb==0)return 0;
    if(pb->nu>=pb->max_nu)
    {
        account*newacc=(account*)malloc(sizeof(account)*(pb->max_nu+10));
        memcpy(newacc,pb->acs,sizeof(account)*pb->nu);
        free(pb->acs);
        pb->acs=newacc;
        pb->max_nu+=10;

    }
    pb->acs[pb->nu]=*a;
    pb->nu++;
    return 1;






}

void save_bank(bank*pb,char *file)
{
    FILE *fp=fopen(file ,"wb");
    fwrite(&pb->nu,sizeof(int),1,fp);
    fwrite(pb->acs,sizeof(account),pb->nu,fp);
    fflush(fp);
}
displayinfo (bank* pb)
{
    unsigned char yn;
    printf("显示所有用户的信息？（y or n）\n");
    yn=getch();
    if(yn=='y')
    {
        printf("\t\t----------------用户------------\n");
        int i;
        account *p=pb->acs;
        printf("id         用户名    密码      余额\n");
    for(i=0;i<=pb->nu-1;i++)
    {
        printf("%-9d  %-9s %-9s %-9.2lf\n",p[i].id,p[i].name,p[i].password,p[i].balance);
    }

    }
       getchar();

}
admin(bank*pb)
{
    char name[20],password[20];
    printf("\t\t-----------------管理员登录--------------\n");
    printf("请输入管理员用户名：");
    scanf("%s",name);
    printf("请输入管理员密码：");
    scanf("%s",password);
    if(!strcmp(name,"admin")&&!strcmp(password,"admin"))
    {
        printf("登录成功！");
        getchar();
        adminlogin(pb);
    }
    else
    {
        printf("密码错误！\n");
        getchar();
    }
}

adminlogin(bank*pb)
{
    int choice;
    while (1)
    {
        admin_menu();
        printf("请选择：");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
          create(pb);
            break;
        case 2:
            destroy(pb);
            break;
        case 3:
            displayinfo(pb);
            getchar();
            break;
        case 0:
            return 0;
            break;
        default:
            printf("输入数字并按回车！\n");
            getchar();
            break;
        }


    return 0;


    }






}
destroy(bank*pb)
{
    int id;
    printf("输入要删除用户的id:");
    scanf("%d",&id);
    if(get_account(pb,id)==0)
        {
            printf("没有找到此用户！\n");
            getchar();
            return 0;
        }
    printf("确定删除此用户？y or n\n");
    if(getch()=='y')
    {
        remove_account(pb,id);
        printf("删除成功！\n");
        getchar();

    }
    return 0;
}
account*get_account(bank*pb,int id)
{
    account *p=pb->acs;
    int i=0;
    for(;i<=pb->nu-1;i++)
    {
        if(id==p[i].id)
            return &p[i];
    }

      return 0;
}
remove_account(bank*pb,int id)
{
    int i,j;
    account *index=get_account(pb,id);
    if(index!=0)
    {
        account*p=pb->acs;
        for(i=0;i<pb->nu-1;i++)
        {
            if(&p[i]==index)
            {
                for(j=i;j<pb->nu;j++)
                    p[j]=p[j+1];
            }
        }
     pb->nu--;
     return 1;
    }
    return 0;

}


