#include <stdio.h>
// verify that getchar() is different from EOF returns either 0 or 1
int main(void) {
    int test;
    test = getchar() != EOF;

    printf("value of test is: %d\n", test);

    return 0;
}
