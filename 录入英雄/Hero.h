#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED
#include <stdio.h>
#include<stdlib.h>

typedef struct _job
{
    int id;
    char *name;
    char *desc;



}job;
typedef struct _abillity
{
    int id;
    char *name;
    char *intro;
}abillity;
typedef struct _pubtime
{
    int year;
    int month;
    int day;
}pubtime;
typedef struct _hero
{
    int id;
    char*name;
    char sex;
    job job;
    double hp;
    double speed;
    abillity abillity;
    pubtime pubtime;
}hero;
void inputHero();
void showHero();
#endif // HERO_H_INCLUDED
