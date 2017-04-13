#include <stdio.h>

int main(){
	char ch;
	int no_of_d = 0, sum = 0;
	while((ch=getchar())!=EOF){
		if('0' <= ch && ch <= '9'){
			no_of_d ++;
			sum += ch - '0';
		}
	}
	printf("input contained %d digits which summed %d\n", no_of_d, sum);
	return 0;
}
