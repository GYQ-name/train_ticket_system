#include "head.h"
#include <stdio.h>
int main_menu(){
    printf("============进入主程序界面============\n");
    printf("1.用户\n");
    printf("2.管理员\n");
    printf("3.退出系统\n");
    printf("请选择你的身份:");
    int a;
    scanf("%d",a);
    return a;
}