/* write a function to convert a string of hexadecimal digits into its equivalent integer value*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int htoi(char s[]) {
    // get length of the string
    int limit = strlen(s);
    // initialize empty index position
    int idx = 0;
    // initialize return variable
    long final = 0;

    while (idx < limit) {
        char c = s[idx];
        // check if it starts with 0
      //  if (c == '0' && idx == 0) {
        //    if (s[idx + 1] == 'x' || s[idx + 1] == 'X') {
          //      idx = 2;
            //}
        //}

        if (c >= 'a' && c <= 'f') {
            final = final + ((10 + c-'a') * pow(16, limit - idx - 1));
        } else if (c >= 'A' && c <= 'F') {
            final = final + ((10 + c - 'A') * pow(16, limit - idx - 1));
        } else if (c >= '0' && c <= '9') {
            final = final + ((c - '0') * pow(16, limit - idx - 1));
        } else printf("error: encountered a character that is not admissible: result of the conversion will be invalid\n");

        idx++;
    }

    return final;

}

int main(void) {
    char s[] = "E7A9";

    int res = htoi(s);

    printf("this is the result of the conversion: %d\n", res);

    return 0;
}
