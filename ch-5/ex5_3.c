#include <stdio.h>
#include <string.h>

void stcat(char *s, char *t) {
    // get length of string s
    int len_s = strlen(s);
    
    printf("address: %p\n", s);
    // go to the end of s
    s += len_s;
    printf("address: %p\n", s);

    while (*s++ = *t++)
        ;

}

int main(void) {
    char s[] = "hello";
    char t[] = "world";

    stcat(&s, &t);
    printf("resulting string is: %s\n", s);

    return 0;
}
