#include <stdio.h>

#define FALSE 0
#define TRUE 1
#define ERROR 2

int isPass(int);

int main(){
	int mark;
	scanf("%d", &mark);
	if(isPass(mark) == TRUE){
		printf("Congrats you passed\n");
	}else if(isPass(mark) == FALSE){
		printf("you failed\n");
	}else
		printf("ERROR!!!\n");
	return 0;
}

int isPass(int m){
	if(m>=0&&m<50){
		return FALSE;
	}
	else if(m>=50 && m <= 100){
		return TRUE;
	}
	return ERROR;
}
