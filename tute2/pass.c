#include <stdio.h>

#define PASS 1
#define FAIL 2
#define CHEAT 3
#define PC 4

int isPass(int);

int main(){
	int m;
	scanf("%d", &m);
	int res = isPass(m);
	if(res == PASS)
		printf("yay you passed!\n");
	else if (res == FAIL)
		printf("You failed\n");
	else if (res == CHEAT)
		printf("You cheated!!!\n");
	else
		printf("you just passed\n");
	return 0;
}

int isPass(int mark){
	// PASS, FAIL, CHEAT. PC
	int result = 0;
	if(mark >= 50 && mark <= 100)
		result =  PASS;
	else if (mark >= 46 && mark < 50)
		result = PC;
	else if ( mark < 50 && mark >= 0)
		result = FAIL;
	else
		result = CHEAT;
	return result;
}
