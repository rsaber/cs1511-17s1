#include <stdio.h>

double c2f (double cel){
	return  5.0/9.0 *( cel - 32);	
}

int main(){
	double inp;
	scanf("%lf", &inp);
	printf("%lf\n", c2f(inp));
	return 0;
}
