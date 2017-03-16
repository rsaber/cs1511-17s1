#include <stdio.h>

int main(){
	double farenheit;
	scanf("%lf", &farenheit);
	printf("%lf", (double) (5.0/9.0) * (farenheit - 32));
	return 0;
}
