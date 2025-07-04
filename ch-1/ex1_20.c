/* This program replaces tabs with a variable number n of blanks.
 * In this case n is declared as an external variable and not as a symbolic constant
 * due to better compatibility and scope sharing across files.*/

#include <stdio.h>

int n = 4;

int main(void) {
    char c;

    while((c = getchar()) != EOF) {
        if (c == '\t') {
            for (int i = 0; i < n; i++){
                putchar(' ');
            }
        } else putchar(c);
    }

    return 0;
}
