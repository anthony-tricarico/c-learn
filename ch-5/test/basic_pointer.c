#include <stdio.h>

void increment(int a) {
    a += 1;
}

void increment_pt(int *a) {
    *a = *a + 1;
}

int main(void) {
    int a = 1;
    int *p = &a;

    printf("this is the value of a at the start of the program: %d\n", a); 
    increment(a);

    printf("this is the value of a incrementing without using pointers: %d\n", a); 

    increment_pt(p);

    printf("this is the value after incrementing using pointers: %d\n", a); 

    return 0;
}
