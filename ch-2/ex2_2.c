/* This program tries to rewrite a for loop without using the logical operators && and ||*/
#include <stdio.h>

#define LIM 1000

int main(void) {
    char s[LIM];
    char c;
    int i = 0;
    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            if (i < LIM -1) {
                s[i] = c;
                i++;
            }

        }
            
    }
    printf("this is the string given in input: %s\n", s);
    return 0;
}
