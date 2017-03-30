#include <stdio.h>

int main(){
	int length, height;
	scanf("%d %d", &height, &length);

	int row, col;

	for(row = 0; row < height; row++){
		for(col = 0; col < length; col++){
			if(!row || row == height - 1 || !col || col == length - 1 )
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}