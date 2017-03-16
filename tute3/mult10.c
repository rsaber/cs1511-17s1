#include <stdio.h>

int main(){
	int lower, upper, sub ,val;
	scanf("%d %d", &lower, &upper);
	sub = lower % 10;
	val = lower + 10 - sub;
	while(val < upper){
		printf("%d\n", val);
		val += 10;
	}
	return 0;
}
