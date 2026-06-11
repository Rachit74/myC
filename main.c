#include <stdio.h>
#include "mystring.h"

int main() {
    char name[] = "Rachit";

    int len_1 = stringlength(name);
    int len_2 = stringlength2(name);

    printf("%d\n%d", len_1, len_2);
    return 0;
}