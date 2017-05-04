#include <stdio.h>

int main(void) {
    char *str = "hello";
    str[0] = 'j';
    printf("%s", str);
    return 0;
}

