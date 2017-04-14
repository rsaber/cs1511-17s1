// Practice question for my cs1511 class
// I won't release solutions, you have to come to my thu13-sitar or fri09-sitar class

/*
  Your task is to write a function called flanderise, which takes in a string, and 'flanderises' it
  You can assume the maximum size after flanderising the string is 1000.
  To flanderise a sentence, every word greater than 3 letters must end with 'erino', but words that have a partial substring match at the end
  will not have 'erino' at the end.

  eg.
  "hello my name is bob" becomes "helloerino my namerino is boberino"
  "compile time" becomes "compilerino timerino"
  "superman is anything but super i reckon" becomes "supermanerino is anythingerino buterino superino"

  Note that "super" becomes "superino" and not "supererino"
*/

#include <stdio.h>


/* EDIT THIS FUNCTION ONLY, DO NOT ADD ANY OTHER LIBRARIES */
/* You may add other functions (in fact, I highly recommend it) */
void flanderise(char * input, char * output){

}
/* ***************** */

void stripNewLine(char * s){
  for(;*s!=0; s++);
  *(s-1) = 0;
}

int main(){
    char input[200];
    char output[1000] ={0};
    fgets(input, 200, stdin);
    stripNewLine(input);
    flanderise(input, output);
    printf("Input String is:\n%s\nFlanderised String is:\n%s\n", input, output);
    return 0;
}
