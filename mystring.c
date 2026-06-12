#include "mystring.h"

size_t stringlength(const char *str) {
    const char *start = str;

    while (*str != '\0')
    {
        str++;
    }
    
    return str - start;
}

size_t stringlength2(const char *str) {
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }

    return length;
    
}

void stringcopy(char *str1, const char *str2) {
    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
    
}


int stringcompare(const char *str1, const char *str2) {
    while (*str1 == *str2)
    {
        if (*str1 == '\0') {
            return 0;
        }

        str1++;
        str2++;
    }

    return (*str1 > *str2) ? 1 : -1;
    

}