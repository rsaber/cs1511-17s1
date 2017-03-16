#include <stdio.h>

#define CI 2.54
#define IF 12

int main(){
	int input, output;
	scanf("%d", &input);
	input /= CI;
	input /= IF;
	printf("%d", input);
	return 0;
}
