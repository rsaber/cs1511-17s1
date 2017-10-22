
/*
 * Write a function that 'undresses' a string, that is, given a string with n amount of leading and trailing whitespace, slowly remove one character of whitespace, starting from the left, print out the current result, then remove from the right, repeating until there is no more whitespace remaining.

 Example:
 Input: ".....cs1511....."
 Output:
   ....cs1511.....
   ....cs1511....
   ...cs1511....
   ...cs1511...
   ..cs1511...
   ..cs1511..
   .cs1511..
   .cs1511.
   cs1511.
   cs1511

  The following example uses ' '.'s instead of ' ''s, to illustrate the function's intended operation.
*/

#include <stdio.h>

void undress(char * string){
    /* TODO your implementation here */

    char *leading, *trailing;
    leading = trailing = string;
    while(*(trailing+1))
        trailing++;
    while(*leading == ' ' || *trailing == ' '){
        if(*leading == ' ') leading++;
        printf("%s\n", leading);
        if(*trailing == ' ' ) *(trailing--) = '\0';
        printf("%s\n", leading);
    }
}

char convert(char a){
    if(a=='G') return 'C';
    if(a=='C') return 'G';
    if(a=='T') return 'A';
    if(a=='A') return 'U';
    return a;
}

void charMap(char *s, char (*f)(char)){
    for(;*s; s++) *s = f(*s);
}

void rna_transcribe(char *dna){
    /*
    for(; *dna; dna++)
        *dna = convert(*dna);
        */
    charMap(dna, &convert);
}

void strip(char *s){
    for(; *s!='\n'; s++);
    *s=0;
}

int main(){
    char string[1000];
    printf("Enter your string here: ");
    fgets(string, 1000, stdin);
    strip(string);
    //undress(string);
    rna_transcribe(string);
    printf("%s\n", string);
    return 0;
}
