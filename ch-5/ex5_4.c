#include <stdio.h>
#include <string.h>

/* write the function strend(s,t) which returns 1 if the string t occurs at the end of the string
* s, and zero otherwise */
int strend(char *s, char *t) {
    // get length of s
    int len_s = strlen(s);
    printf("lenght of s is: %d\n", len_s);

    // get length of t
    int len_t = strlen(t);
    printf("lenght of t is: %d\n", len_t);

    // this line prints nothing after : since at position s + strlen(s) there is the
    // string terminator character '/0'
    printf("this is the ending character: %c\n", *(s+len_s)); 

    // access the position in memory given by s + len_s - len_t
    // (the position from where the check should happen)
    
    printf("the value of s before is: %p\n", s);
    s += len_s - len_t;
    printf("the value of s is: %p\n", s);

    // check that the characters from that position till the end match the string t
    int ctr = 0;
    
    printf("the value of the char at s now is: %c\n", *s);
    printf("the value of the char at t now is: %c\n", *t);

    while (ctr <= len_t) {
        // use value of pointer s, then increase by one to access the next character in the string
        // similarly, access t and do the same checking equivalence character by character 
        if (*s++ == *t++)
            ;
        else return 0;

        ctr++;
    }

    return 1;

}


int main(void) {
    char s[] = "hello world";
    char t[] = "do";

    if (strend(&s, &t)) 
        printf("end of s matches t\n");
    else 
        printf("end of s does not match t\n");

    return 0;

}
