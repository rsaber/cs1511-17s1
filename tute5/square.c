#include <stdio.h>

int main(){
	int squares[15] = {0};

	int i = 0;
	for(i=0; i<15; i++){
		squares[i] = i*i;
		printf("%d", *(squares+i));
	}
	
	return 0;
}
