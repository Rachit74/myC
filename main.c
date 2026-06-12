#include <stdio.h>
#include "mystring.h"
#include <string.h>

int main() {
    char s[] = "Rachit";
    
    char *str1 = stringfindchar(s, 'x');

    printf("%s\n", str1);
    return 0;
}