/* Write the function strindex(s,t) which returns the position of the rightmost occurrence of t in s, or -1 if there is none 
 * Potential Improvements: allow also to check for occurrences of words instead of single characters*/
#include <stdio.h>
#include <string.h>

int strindex(char t[], char s[]) {
    int len_t = strlen(t);
    int len_s = strlen(s);
    
    // Start iterating over t to extract characters

    int idx_t = len_t - 1;

    while (idx_t != 0) {
        char char_t = t[idx_t];
        for (int idx_s = len_s - 1; s[idx_s] != '\0'; idx_s--) {
            if (s[idx_s] == char_t) {
                return idx_s;
            }
        }
        idx_t--;
    }

    return -1;


}

int main(void) {
    char s[] = "hello world";
    char t[] = "this is my life";

    printf("first shared occurence of a character in t in string s (starting from right) is at index: %d\n", strindex(t, s));

    return 0;
}
