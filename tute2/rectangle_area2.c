// written by lab2

#include <stdio.h>

int main(void){
	double length, height;
	scanf("%lf", &length);
	scanf("%lf", &height);
	if(length <= 0 || height <= 0){
		printf("invalid input!!!\n");
		return 0;
	}
		
	printf("the area is %lf\n", height*length);
	return 0;
}
