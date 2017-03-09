#include <stdio.h>

int main(){
	printf("enter your age\n");
	int age;
	int successRead = 0;
	while(scanf("%d", &age) != 1){
		printf("%d", successRead);
	}
	if (age < 0)
		printf("you're far too young\n");
	else if(age < 18 ) {
		printf("dont drink\n");
	}else{
		printf("drink as much as you can");
	}
	return 0;
	
	
}
