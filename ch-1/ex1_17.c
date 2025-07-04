#include <stdio.h>
#define MAXLINE 1000
#define MINLINE 80

/* write a program to print all input lines that are longer than 80 characters
 * 1. isolate different lines
 * 2. check length of lines
 * 3. print only lines that satisfy the criterion*/
int check_length(char text[MAXLINE]) {
    int counter = 0;

    // isolate lines and reset counter when new line is encountered

    for (int i = 0; i < MAXLINE; i++) {
        if (text[i] != '\0' && text[i] != '\t' && text[i] != ' ') {
            counter++
        } else if (text[i] == '\n') counter = 0;
    }
    return counter;
}

int main(void) {
    char c;

    while ((c = getchar()) != EOF) {
        
    }
}
