// written by lab2

#include <stdio.h>

int main(void){
	int length, height;
	scanf("%d", &length);
	scanf("%d", &height);
	if(length <= 0 || height <= 0){
		printf("invalid input!!!\n");
		return 0;
	}
		
	printf("the area is %d\n", height*length);
	return 0;
}
