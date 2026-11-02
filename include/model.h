#ifndef MODEL_H
#define MODEL_H
#define TID_LEN 20
#define PLACE_LEN 20
#define TIME_LEN 20
#define UNAME_LEN 20
#define SEAT_ID_LEN 10   
#endif 

typedef struct {
    char tid[TID_LEN];
    char start[PLACE_LEN];
    char end[PLACE_LEN];
    char time[TIME_LEN];
    char seat_level[10];  
    double price;
    int remain;
}Ticket;

typedef struct {
    char username[UNAME_LEN];   
    char tid[TID_LEN];
    char seat[SEAT_ID_LEN];    
    char seat_level[10];
    double total;               
}UserTicket;

