#include <stdio.h>

#define IN 1
#define OUT 0

/* This is a program that prints a histogram of the length words of words given in input
 *
 * approach:
 * 1. declare an array of length 10 with all its values initialized to 0
 * 2. count the number of characters in each word
 * 3. use the number of characters to access the array at that index and increase the value by 1
 * 4. once the entire sequence of words has been processed, access each item in the list and print it*/

int main(void) {
    int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char c;
    int status = OUT;
    int nchar = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n'| c == ' ' | c == '\t') {
            status = OUT;
            a[nchar]++;
            nchar = 0;
        } else {
            status = IN;
        }

        if (status == IN) {
            nchar++;
        }

    }

    for (char val = '1'; val <= '9'; val++) {
        putchar(val);

        int idx = val - '0';

        int counter = 0;
        
        while (counter < a[idx]) {
            putchar('-');
            counter++;
        }

        putchar('\n');
        
    }

    return 0;
}
