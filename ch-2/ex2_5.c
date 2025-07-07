/* Write the function any(s1, s2) which returns the first location in a string s1 where any character
 * from the string s2 occurs or -1 if s1 contains no characters from s2*/
#include <stdio.h>
#include <string.h>

#define LIMIT 100000
int any(char s1[], char s2[]) {

    // result should be an index (so int)
    long result = LIMIT;

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int idx2 = 0; idx2 < len2; idx2++) {
        char to_check = s2[idx2];

        for (int idx = 0; idx < len1; idx++) {
            char value = s1[idx];
            if (value == to_check && idx < result) {
                result = idx;
            }
        }
    }

    if (result == LIMIT) return -1;

    return result;
}

int main(void) {
    char s1[] = "hello world";
    char s2[] = "c";
    int result = any(s1, s2);

    printf("first place where s1 has character in common with s2 is at index: %d\n", result);

    return 0;
}
