
#include <stdio.h>
#include <string.h>

void stripn(char * s){
	for(;*s != '\n'; s++);
	*s = '\0';	
}

void reverse(char *string){
	int size = strlen(string)-1;
	int i=0;
	while(i<size){
		// do the swap
		char temp = string[i];
		string[i] = string[size];
		string[size] = temp;
		i++;
		size--;
	}
}

int main(){
	FILE* fp = fopen("data.txt", "r");
	char buffer[1000] = {0};
	while(fgets(buffer, 1000, fp) ){
		stripn(buffer);
		reverse(buffer);
		printf("%s", buffer);	
	}
	return 0;
}
