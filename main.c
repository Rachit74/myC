#include <stdio.h>
#include "mystring.h"

int main() {
    char str1[] = "ABC";
    char str2[] = "ABE";

    int cpm = stringcompare(str1, str2);
    printf("%d\n", cpm);
    return 0;
}