#include <stdio.h>
#include <stdlib.h>
#include "admin.h"
#include "user.h"
char *file="./bank.txt";

int main()
{
    begin_menu();/*开始动画*/   getchar();
    bank *pb=0;
    if(load_bank(file)!=0)
     {
         pb=load_bank(file);
     }
     else
     {
         pb=create_bank(10);
     }
     getchar();
     account *a=0;
     int choice;
      while (1)
      {
          main_menu();
          scanf("%d",&choice);
          switch(choice)
          {
        case 1:
            user(pb,a);
            save_bank(pb,file);
            break;
        case 2:
            admin(pb);
            save_bank(pb,file);
            break;
        case 0:
            save_bank(pb,file);
            return 0;
            break;
        default:
            printf("输入数字并按回车！\n");
        break;
          }
      }
    return 0;
}
