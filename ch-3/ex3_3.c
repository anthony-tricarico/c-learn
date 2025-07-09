#include <stdio.h>

#define LIMIT 1000

/* given a string of the form charstart-charend determine how many characters are in between start
* and end if it where to be expanded */
int determine_interval(char s1[]){

    int interval;
     for (int i = 0; s1[i] != '\0'; i++) {
        switch (s1[i]) {
            case '-':
            char start = s1[i-1];
            char end = s1[i+1];

            interval = end - start;
        }
    }

    return interval;
}

/* this could be improved to handle multiple '-' and to make sure that s2 does not get overwritten
* every time by keeping track of where the latest updated index is and continue from there
* instead of starting from the beginning every time */

void expand(char s1[], char s2[]) {
    for (int i = 0; s1[i] != '\0'; i++) {
        switch (s1[i]) {
            case '-':
            char start = s1[i-1];
            int interval = determine_interval(s1);

            for (int idx = 0; idx <= interval; idx++) {  
                    s2[idx] = start + idx;
                }
            break;
        }
    }
    printf("this is the expanded list: %s\n", s2);
}

int main(void) {
    char s1[] = "a-z";
    int interval = determine_interval(s1);
    char s2[interval];
    printf("interval is: %d\n", determine_interval(s1));
    expand(s1, s2);

    return 0;

}
