#include <stdio.h>
int main(void) {
    printf("sun mon tue wed thu fri sat\n");
    int month = 30;   //一個月有幾天 
    int day;          //已經印到第幾天了
    int week;         //已經印到這個星期的第幾天了
    int k;
    for(k=3;k>0;--k)  printf("    ");
    for(day=1, week=4; day<=month; ++day, ++week){
        if(week > 7){               //七天換行一次 
            printf("\n");
            week = 1;
        }
        printf("%-4d",day);        //印出日子
    }   
    printf("\n");
    return 0;
}
