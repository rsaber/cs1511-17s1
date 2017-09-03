// Practice question for my cs1511 class
/*
	Given a string, find and print out the most frequent letter and its frequency as a percentage.
	Do not make any distinction between uppercase and lowercase letters, and ignore punctuation and spaces.
*/


#include <stdio.h>

// Some extra functions
int isLetter(char a){
	return 'a' <= a && a <= 'z' || 'A' <= a && a <= 'Z' ? 1 : 0;
}

char lowerify(char a){
	return 'A' <= a && a <= 'Z' ? a - 'A' + 'a' : a;
}

// Edit this function only
void findFreqs(char * string){
	int i;
	int total = 0 ;
	int freqs[26] = {0};
	for(i=0; string[i]!='\0'; i++){
		if(!isLetter(string[i]))
			continue;
		freqs[lowerify(string[i])-'a']++;
		total++;
	}
	int max = 0;
	char maxLetter = 0;
	for(i=0; i<26; i++){
		if(max < freqs[i]){
			max = freqs[i];
			maxLetter = i + 'a';
		}
	}
	printf("Most frequently occuring letter is %c, occuring %lf of the time. \n", maxLetter, (float) max/total);
}

int main(int argc, char **argv){
	if(argc != 2){
		printf("No Argument! To run $ %s \"[sentence]\"\n", argv[0]);
		return 1;
	}
	findFreqs(argv[1]);
	return 0;
}
