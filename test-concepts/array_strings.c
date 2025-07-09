/* Familiarizing with string representations in C as ordered collection of characters in arrays */
#include <stdio.h>

int main(void) {
    // using the string terminator '\0' allows the compiler to understand that the string is ended
    char arr[6] = {'h','e','l','l','o','\0'};

    printf("this is the string: %s", arr);

    return 0;
}
