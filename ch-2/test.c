#include <stdio.h>

int main(void) {
    char s[] = "this is hello world";

    s[1] = 'u';

    printf("this is the changed string: %s\n", s);

    return 0;
}
