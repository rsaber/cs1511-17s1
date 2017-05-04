#include <stdio.h>

#define FALSE 0
#define TRUE 1

void strip_comment(char * string){
	int i = 0;
	int hasQuotesOpened = FALSE;
	for(i=0; string[i]!= 0; i++){
		if(string[i] == '"'){
			hasQuotesOpened = !hasQuotesOpened;
		}
		if(string[i] == '/' && string[i+1] == '/' && !hasQuotesOpened){
			string[i] = 0;
			return;
		} 
	}
}

int main(){
	char string[100];
	fgets(string,100,stdin);
	printf("[%s]", string);
	strip_comment(string);
	printf("[%s]", string);
	return 0;
}
