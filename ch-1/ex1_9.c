#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {
    // check if more than one consecutive blank
    
    int nblank = 0;
    char c;
    while ((c = getchar()) != EOF) {
        if (c == ' ' && nblank == 0) {
            putchar(' ');
        } else if (c == ' ' && nblank != 0) {
  //          putchar('\0');
//            nblank = 0;
            continue;
        } else putchar(c);
    }

    return 0;
}
