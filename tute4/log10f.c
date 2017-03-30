#include <stdio.h>

int main(){
	unsigned long long input, i = 0;
	if(scanf("%d", &input) != 1){
		printf("Error!!!\n");
		return 1;
	}
	int input2 = input;
	while(input >= 10){
		input /= 10;
		i++;
	}
	printf("the log of %d is %d\n", input2, i);
	return 0;
}