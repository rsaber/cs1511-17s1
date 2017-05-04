
#include <stdio.h>
#include <string.h>

void reverse(char * s){
	int size = strlen(s) - 1;
	int i = 0;
	while(i < size) {
		char temp = s[i];
		s[i] = s[size];
		s[size] = temp;
		i++;
		size--;
	}
}

void stripNewline(char * s){
	for(;*s!='\0'; s++);
	*(s-1) = 0;
}

int main(){
	char string[1000];
	FILE *fp = fopen("data.txt", "r");
	while(fgets(string, 1000, fp) != NULL){
		stripNewline(string);	
		printf("before:::: %s", string);
		reverse(string);
		printf("%s", string);
	}
	return 0;
}
