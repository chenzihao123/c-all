#include <stdio.h>

begin_menu()
{
    printf("\n\n\n");
    printf("\t欢迎进入银行系统 \n");
}
admin_menu()
{
    printf("---------管理员操作界面---------\n");
    printf("1.创建用户\n");
    printf("2.删除用户\n");
    printf("3.显示所有用户的信息\n");
    printf("0.退出\n");
}
main_menu()
{
        printf("---------主界面---------\n");
    printf("1.用户登录\n");
    printf("2.管理员登录\n");
    printf("0.退出\n");

}
void user_menu()
{
   printf("---------用户---------\n");
   printf("1.取款\n");
   printf("2.存款\n");
   printf("3.转账\n");
   printf("4.查询\n");
   printf("5.修改密码\n");
   printf("0.退出\n");
}
