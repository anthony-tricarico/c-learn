#include <stdio.h>

// a program that makes tabs, backspaces, and backslash visible unambiguously. 
int main(void) {
    char c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else putchar(c);
    }

    return 0;
}
