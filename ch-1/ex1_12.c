#include <stdio.h>

// a program that prints its input one word per line

int main(void) {
    char c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar('\n');
        } else printf("%c", c);
    }

    return 0;
}
