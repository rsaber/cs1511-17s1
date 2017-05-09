#include <stdio.h>
#include <stdlib.h>

int mystrlen(char * s){return !*s ? 0 : 1 + mystrlen(s+1);}



int main(){
	char string[4096];
	while(fgets(string, 4096, stdin)){
		printf("this line is %d characters long\n", mystrlen(string));
	}
	return 0;
}
