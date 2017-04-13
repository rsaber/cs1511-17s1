#include <stdio.h>

int main(){
	int i,j;
	int height;
	char ch = 'A';
	scanf("%d", &height);
	for(i=0; i<height; i++){
		for(j=0; j<height-i-1;j++){
			printf(" ");
		}
		int k;
		for(k=0; k< i; k++){
			putchar(ch);
		}
	
	}
}
