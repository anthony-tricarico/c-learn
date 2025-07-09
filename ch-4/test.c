#include <stdio.h>

int main(void) {
    char arr[3] = {'a', 'b', 'c'};
    int x = 0;
    while (x < 3) {
        printf("this is the char: %c\n", arr[++x]);
    }
}
