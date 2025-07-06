/* print the ranges of char, short, int, and long variables*/

#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("minimum char is: %d\n", CHAR_MIN);
     printf("max char is: %d\n", CHAR_MAX);
printf("min short is: %d\n", SHRT_MIN);
printf("max short is: %d\n", SHRT_MAX);
printf("max int is: %d\n", INT_MAX);
printf("min int is: %d\n", INT_MIN);
printf("min long is: %ld\n", LONG_MIN);
printf("max long is: %ld\n", LONG_MAX);
    
}
