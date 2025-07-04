/* write a function reverse (s) that reverses the character string s. Use it
 * to write a program that reverses its input a line at a time.
 * 
 * Approach:
 * 1. get the line by adding characters to an array until the character '\n' is encountered
 * 2. reverse it by iterating over the array from end to beginning
 * (might be useful to have a counter so that every time a character is added to the array
 * it is possible to get also the maximum index for the character array)*/

#include <stdio.h>
#define MAXLINE 1000

int main(void) {
    char c; 
    char arr[MAXLINE];
    int counter = 0;

    while ((c = getchar()) != EOF) {
        for (int i = 0; i < MAXLINE; i++) {
            if (c != '\n' && c != '\0') {
                counter++;
                arr[i] = c;
            }
        }

        printf("this is the counter: %d\n", counter); 

        for (int i = counter - 1; i > 0; i--) {
            //putchar(arr[i]);

        }

        putchar('\0');
        
        
    }
    return 0;
}


