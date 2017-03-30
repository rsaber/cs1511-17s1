#include <stdio.h>

int main(){
	int length;
	scanf("%d", &length);

	int spacesInside=-1, spacesOutside=length-1;

	int i = 0, j=0;
	while(i<=length-1){
		for(j=0; j<spacesOutside; j++){
			printf(" ");
		}
		if(i != 0)
			printf("*");
		for(j=0; j<spacesInside; j++){
			printf(" ");
		}
		printf("*\n");

		spacesOutside--;
		spacesInside+=2;
		i++;
	}
	return 0;
}