#include <stdio.h>
#define MAXLEN 100

/* implements a way to push new values inside a stack (if there is enough space) */
void push(int *c, int *idx, int value) {
    
    if (*idx< MAXLEN) {
        c[*idx] = value; 
        *idx += 1;
    } else printf("stack overflow\n");
}

// why do we need a pointer here?
// start from pointer and decrease actual value being passed into the function
// *c is an integer pointer, can be used to access to elements of list
// idx is the index to pop, we start from the last one and continue from there to decrease it

/* implements a way to pop the last entry in the stack (if there are entries available) */
int pop(int *c, int *idx) {
    if (*idx > 0) {
        *idx -= 1;
        return c[*idx];
    }  else {
        printf("nothing to pop\n");
        return -1;
    }
}


int main(void) {
    int stack[MAXLEN];

    int idx = 0;
    int *p_idx = &idx;
    printf("pointer address to stack is %p\n", stack);
    printf("increased pointer address till after end of stack is %p\n", &stack + 1);

    printf("pointer address to next element in stack is %p\n", &stack[1]);

    push(stack, &idx, 20);
    push(stack, &idx, 30);

    printf("value of idx is: %d\n", idx);
    push(stack, &idx, 40);
    push(stack, &idx, 50);
    printf("value of idx before popping is: %d\n", idx);
    int a = pop(stack, &idx);
    int b = pop(stack, &idx);
    printf("value of idx after popping is: %d\n", idx);

    printf("elements in the array so far are: %d, %d, %d, %d\n", stack[0], stack[1], stack[2], stack[3]);
    printf("the first popped value is: %d\n", a);
    printf("the second popped value is: %d\n", b);


    return 0;

}
