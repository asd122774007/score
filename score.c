#include <stdio.h>

int main(){
    int score;
    
    printf("please input the score\n");
    scanf("%d",&score);
    
    while(score != -1){
        if(score > 100 || score < -1)
            printf("illegal input\n");
        else if(score >= 80)
            printf("A\n");
        else if(score >= 70)
            printf("B\n");
        else if(score >= 60)
            printf("C\n");
        else 
            printf("F\n");
            
        printf("please input the score\n");
        scanf("%d",&score);
    }
    return 0;
}
