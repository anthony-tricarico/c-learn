#include <stdio.h>

int main(void) {
    int x = 2;
    // always assign a type to a pointer using the expression type *pointer_name
    // without this the pointer will not be able to correctly reference the variable
    // it is pointing to
    int *p = &x; // p points to the address of variable x
    int *c = &x; // also c points to the address of variable x

    int y = *c + 1; // I dereference the pointer c to extract the value of the address it was
                    // pointing to, then I increase that value by 1 and I assign it to the variable y


    printf("I can get the value associated to x through its pointer\nThe value is: %d\n", *p);
    printf("This is x incremented by 1: %d\n", y);
    return 0;
}
