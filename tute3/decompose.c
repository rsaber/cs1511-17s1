#include <stdio.h>

int main(void) {
     int val, origVal;

     scanf("%d", &val);
     printf("You entered %d which is decomposed: ", val);
     origVal = val;

     if (origVal > 9999) {
         printf(" %d", val/10000);
         val = val % 10000;
     }
     if (origVal > 999) {
         printf(" %d", val/1000);
         val = val % 1000;
     }
     if (origVal > 99) {
         printf(" %d", val/100);
         val = val % 100;
     }
     if (origVal > 9) {
         printf(" %d", val/10);
         val = val % 10;
     }
     printf(" %d\n", val);

     return 0;
}

