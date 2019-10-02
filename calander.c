#include <stdio.h>
int main(void) {
	printf("sun mon tue wed thu fri sat\n");    //印出星期
	int month = 30;
	int day = 1;
	int week = 3;
	int k;
	for(k=3;k>0;--k)  printf("    ");
	while(day<=month){
		if(week == 7){               //七天換行一次
			printf("\n");
			week = 0;
		}
		printf("%-4d",day);        //印出日子
		++day;
		++week;
	}
	return 0;
}
