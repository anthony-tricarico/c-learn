/* Rewrite the function lower, which converts upper case letters to lower case, with a conditional
 * expression instead of if-else*/

#include <stdio.h>

void lower(char s[]) {
    /* Note: by typing man ascii it is possible to find the decimal representation of each character
     * according to the ASCII numerical representation.
     * From the table it is possible to see that lowercase letters are 32 positions after their
     * uppercase counterpart, thus the choice of 32 in the code*/

    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] + 32 : s[i];  
    }

    printf("the value of the difference is: %d\n", ('Z'-'A')); 
    printf("the string lower case is: %s\n", s);
}

int main(void) {
    char s[] = "THIS IS A FULL STRING typed in uppercase";

    lower(s);

    return 0;
}
