#include "head.h"
#include <stdio.h>
int main_menu(){
    printf("============进入主程序界面============\n");
    printf("1.用户\n");
    printf("2.管理员\n");
    printf("3.退出系统\n");
    printf("请选择你的身份:");
    int a;
    scanf("%d",&a);
    return a;
}
int customer_menu(){
    printf("============用户界面=============\n");
    printf("1.买票\n");
    printf("2.退票/改签\n");
    printf("3.回到主页\n");
    printf("4.退出系统\n");
    int choice;
    scanf("%d",&choice);
    return choice;
}
int admin_menu(){
    printf("============管理员界面=============\n");
    printf("1.查看车票\n");
    printf("2.增删车票\n");
    printf("3.回到主页\n");
    printf("4.退出系统\n");
    int choice;
    scanf("%d",&choice);
    return choice;
}
int add_del_page(){
    printf("=========增删界面========\n");
    printf("1.增加车票\n");
    printf("2.删除车票\n");
    printf("3.返回程序\n");
    printf("4.退出程序\n");
    int choice;
    scanf("%d",&choice);
    return choice;
}
int refund_change_page()
{
    printf("=====退票/改签=====\n");
    printf("1.退票\n");
    printf("2.改签\n");
    printf("3.返回用户菜单\n");
    printf("4.退出整个系统\n");
    int op;
    scanf("%d",&op);
    return op;
}
