/* write a version of squeeze(s1, s2) that deletes each character in s1 that matches any character in string s2
 * note: this preliminary version introduces a blank space instead of removing the unwanted letters*/
#include <stdio.h>
#include <string.h>

void squeeze(char s1[], char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int idx = 0;

    // iterate to extract each character in the second string
    printf("length of string 2 is: %d\n", len2);
    for (; idx < len2; idx++) {
        // get character to check its presence in the first string
        char check = s2[idx];
        // iterate to check equality of each character in the first string
        for (int idx2 = 0; idx2 < len1; idx2++) {
            char to_check = s1[idx2];

            if (to_check != check) {
                s1[idx2] = to_check;
            } else {
                s1[idx2] = ' ';
            }

        }


    }

    printf("final string is: %s\n", s1);
}

int main(void) {
    char s1[] = "hello welcome to my life";
    char s2[] = "hello this is my dream";

    squeeze(s1, s2);

    return 0;
}
