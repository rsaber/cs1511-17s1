#include <stdio.h>

int main(){
	char ch;
	int amount = 0;
	int sum = 0;
	while((ch=getchar())!=EOF){
		if('0' <= ch && ch <= '9'){
			amount++;
			sum += ch - '0';	
		}
	}
	printf("%d %d", amount, sum);
	return 0;
}
