#include <stdio.h>
#include "admin.h"

int user(bank*pb,account *a)
{
    int id;
    char password[20];
    printf("-----------用户登录--------------\n");
    printf("输入你的id：");
    scanf("%d",&id);
    printf("输入你的密码：");
    scanf("%s",password);
    a=check_user(pb,id,password);
    if(a==0)
    {
        printf("id or password 错误！\n");
        getchar();
        return 0;
    }
    else
    {
        printf("登录成功！\n");
        userlogin(pb,a);

    }
}
account *check_user(bank*pb,int id,char *password)
{
    account*p=pb->acs;
    int i;
    for(i=0;i<pb->nu;i++)
    {
        if(p[i].id==id)
            if(!strcmp(p[i].password,password))
            return &p[i];
        else
            return 0;
    }

    return 0;


}
int userlogin(bank*pb,account *a)
{
    int choice;
    while(1)
    {
        user_menu();
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            withdraw(pb,a);
            break;
        case 2:
            deposit(pb,a);
            break;
        case 3:
             transfer(pb,a);                  //转账
            break;
        case 4:
            check(pb,a);
            break;
        case 5:
            change_password(pb,a);
            break;
        case 0:
            return 0;
            break;
            default:
            printf("输入数字并按回车！\n");
            getchar();
            break;
        }

    }

}
int withdraw(bank*pb,account *a)
{
    double amt;
    printf("请输入要取出的金额：");
    scanf("%lf",&amt);
    printf("确定取出<%.2lf>? y or n\n",amt);
    if(getch()=='y')
    {

        if(!withdraw_account(a,amt))
        {
            printf("余额不足！\n");
        }
        else
        {
            printf("取款成功！当前余额：%.2lf\n",a->balance);

        }
        getchar();
    }
    return 0;
}
int withdraw_account(account*a,double amt)
{
    if(amt<=0||amt>a->balance)return 0;
    a->balance-=amt;
    return 1;
}
void deposit(bank*pb,account*a)
{
    double amt;
    c:
    printf("请输入要取出的金额：");
    scanf("%lf",&amt);
    if(amt<=0)
    {printf("请输入正确的金额！\n");
       goto c;
    }
    printf("确定存入<%.2lf>? y or n\n",amt);
    if(getch()=='y')
    {

        a->balance+=amt;
        printf("存款成功！当前余额为：%.2lf\n",a->balance);
        getchar();
    }

}

 int change_password(bank*pb,account*a)
 {
     char password[20];
     char password2[20];

     printf("输入原密码：\n");
     scanf("%s",password);
     if(strcmp(password,a->password)!=0)
     {
         printf("密码错误！\n");
         return 0;
     }
     c:
     printf("请输入新密码：");
     scanf("%s",password);
     printf("再次输入新密码：");
     scanf("%s",password2);
     if(strcmp(password2,password)!=0)
     {
         printf("两次密码不一致！\n");
         goto c;
     }
     printf("确定更改密码？y or n\n");
     if(getch()=='y')
     {
         strcpy(a->password,password2);
     }
     else
     {
         return 0;
     }


     printf("修改成功！\n");
     getchar();

 }
void check(bank*pb,account*a)
{
     printf("id:%d\n",a->id);
     printf("用户名：%s\n",a->name);
     printf("余额：%.2lf\n",a->balance);
     getchar();
     getchar();

}
void transfer(bank* pb,account*a)
{
    double amt;
    int sid;
    int did1;
    int i;

    char name[20];
    sid=a->id;
    printf("输入要转入账户的id：");
    scanf("%d",&did1);
    printf("再次输入要转入账户的姓名：");
    scanf("%s",name);
    printf("输入要转入的金额：");
    scanf("%lf",&amt);
    for(i=0;i<pb->nu;i++)
    {
        if(pb->acs[i].id==did1&&(!strcmp(pb->acs[i].name,name)))
        {
            pb->acs[i].balance+=amt;
            a->balance-=amt;
            printf("转账成功！\n");
            getchar();
            return 0;
        }

    }
    printf("输入有误！请重新操作！\n");
    getchar();
    return 0;
}



