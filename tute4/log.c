#include <stdio.h>

int main(){
	int number, i = 0;

	if(scanf("%d", &number) != 1){
		printf("erorr!!!");
		return 1;
	}
	while( number >= 10){
		number = number/10;
		i++;
	}

	printf("%d", i);
	return 0;
}
