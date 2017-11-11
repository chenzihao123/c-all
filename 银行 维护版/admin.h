#ifndef ADMIN_H_INCLUDED
#define ADMIN_H_INCLUDED
#include "user.h"
#include "admin.h"
typedef struct bank
{
    account *acs;
    int nu;
    int max_nu;
}bank;
extern bank* load_bank(char *file);
extern bank* create_bank(int ma);
extern void create(bank *pb);
extern account* create_account();
extern int add_account(bank*pb,account *a);//将a插入到程序数据中
extern void save_bank(bank*pb,char *file);
extern void displayinfo (bank* pb);
extern void admin(bank*pb);
extern int adminlogin(bank*pb);
extern int destroy(bank*pb);
extern account *get_account(bank*pb,int id);
extern int remove_account(bank*pb,int id);
#endif // ADMIN_H_INCLUDED
