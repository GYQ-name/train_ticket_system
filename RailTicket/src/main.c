#include "head.h"
#include <stdio.h>
int main(){
    printf("\n============欢迎使用铁路购票平台==============\n");
    int running=1;
    while(running){
        running = main_menu();
        if(running==1){
            ///进入用户界面
        }
        else if(running==2){
            //进入管理员界面
        }
        else if(running==3){
            running =0;
        }
    }
    printf("退出系统");
    return 0;
}