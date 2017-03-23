#include <stdio.h>

#define CI 2.54
#define IF 12

int main(){
	int height;
	scanf("%d", &height);
	height /= CI;
	height /= IF;
	printf("%d", height);
	return 0;
}
