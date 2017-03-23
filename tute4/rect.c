#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	
	int x=0, y=0;

	while(x<a){
		y = 0;
		while(y<b){
			if(y%(b-1) == 0  || x%(a-1)==0)
				printf("*");
			else
				printf(" ");
		
			y++;
		}
		x++;
		printf("\n");
	}
	return 0;
}
