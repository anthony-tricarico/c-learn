#include <stdio.h>

int main(void) {
    char c;
    int counter = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' | c == '\t' | c == '\n') {
            counter++;
        }
    }
    printf("number of blanks, tabs, and newlines is: %d\n", counter);
    return 0;
}
