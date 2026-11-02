#include "auth.h"
#include <stdio.h>
#include <string.h>
//密码判定
int check(void){
    char user_name[16];
    char password[16];
    printf("请输入账号:");
    scanf("%s",user_name);
    printf("请输入密码:");
    scanf("%s",password);
    if(strcmp(user_name,"1001")==0 && strcmp(password,"123456")==0){
        printf("登录成功！！！\n");
        return 1;
    }
    printf("账号或密码错误，请重新登录！！！\n");
    return 0;
}