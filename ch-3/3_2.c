#include <stdio.h>
#include <string.h>

#define LIMIT 1000
/* Write a function escape(s,t) that converts characters like newline and tab into visible escape
 * sequences as it copies the string t to s. Use a switch.*/

// When setting a pre-specified value for the limit of the array when going beyond the last allowed
// value we get garbage variables being inserted in the array.

void escape(char s[], char t[]) {
    for (int counter = 0; s[counter] != '\0'; counter++) {
        switch (s[counter]) {
            case '\t':
                t[counter] = '\\';
                t[counter += 1] = 't';
                break;

            case '\n':
                t[counter] = '\\';
                t[counter += 1] = 'n';
                break;

            default:
                t[counter] = s[counter];
                break;
        }
    }

    printf("This is string t with visible tabs and newlines: %s\n", t);
}

int main(void) {
    char s[] = "hello \t my \n world";
    char t[1000];

    printf("The original string is: %s\n", s); 
    escape(s, t);

    return 0;
}
