#include "head.h"
#include <stdio.h>
int main(){
    printf("\n============欢迎使用铁路购票平台==============\n");
    int running=1;
    
    while(running){
        running = main_menu();
        if(running==1){
             running = customer_page();
        }
        else if(running==2){
            running = admin_page();
        }
        else if(running==3){
            running =0;
        }
    }
    printf("退出系统");
    return 0;
}
int admin_page(){
while(!check()){

    }
    int choice;
   
    do{
        choice = admin_menu();
        if(choice == 1){
            show_ticket();
        }
        else if (choice == 2){
            add_del_handle();
        }
        else if (choice == 4){
            return 0; 
        }
    }while(choice != 3);
    return 1;
}
int customer_page(){
    int choice;
    do {
        choice =  customer_menu();
        if(choice == 1){
            buy_ticket();
        }
        else if (choice == 2){
            refund_change_handle();
        }
        else if (choice == 3){
            return 1;
        }
        else if(choice == 4){
            return 0;
        }
    } while(1);
}
int add_del_handle(){
    while(1){
    int op =add_del_page();
    if(op ==1){
        add_ticket();
    }
    else if(op ==2){
        del_ticket();
    }
    else if(op ==3){
        break;
    }
    else if(op ==4){
        exit(0);
    }
    }
}
int refund_change_handle()
{
    while(1)
    {
        int op = refund_change_page();
        if(op == 1)
        {
            refund_ticket();
        }
        else if(op == 2)
        {
            change_ticket();
        }
        else if(op == 3)
        {
            break;   
        }
        else if(op == 4)
        {
            exit(0); 
        }
    }
}

