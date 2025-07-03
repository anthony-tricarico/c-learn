#include <stdio.h>

// experiment to find out what happens when string contain escaped characters

int main(void) {
    printf("with this I can print an integer: %d\n", 1);
    printf("with this I can print a character: %c\n", 'a');
    // more advanced
    int a = 10;

    printf("with this I can print a pointer to the declared variable 'a': %p\n", &a);

    return 0;
}
