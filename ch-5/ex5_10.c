#include <stdio.h>
#include <ctype.h>

#define MAXLEN 100
/* implements a way to push new values inside a stack (if there is enough space) */
void push(char *c, int *idx, int value) {
    
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
char pop(char *c, int *idx) {
    if (*idx > 0) {
        *idx -= 1;
        return c[*idx];
    }  else {
        printf("nothing to pop\n");
        return '0';
    }
}


/* rudimentary implementation of reverse Polish notation calculator which is able to handle
* single digit inputs and outputs and can only output integer single digit numbers
* TODO:
* - make the function accept multi-digit inputs
* - make it so the function can output floating point numbers due to quotient operation */
int main(int argc, char *argv[]) {
    char stack[MAXLEN];

    int idx = 0;
    int *p_idx = &idx;

    int res;
    char res_to_push;
    while (argc-- > 0) {
        // push values in stack
        char val = *argv++[0];
        if (isdigit(val)) {
            push(stack, &idx, val);
        } else {
            char char1 = pop(stack, &idx);
            char char2 = pop(stack, &idx);
            int num1 = char1 - '0';
            int num2 = char2 - '0';
            switch (val) {
                case '+':
                    res = num1 + num2;
                    printf("result is: %d\n", res);
                    res_to_push = res + '0';
                    push(stack, &idx, res_to_push);
                    break;
                
                case '-':
                    res = num1 - num2;
                    printf("result is: %d\n", res);
                    res_to_push = res + '0';
                    push(stack, &idx, res_to_push);
                    break;

                case '*':
                    res = num1 * num2;
                    printf("result is: %d\n", res);
                    res_to_push = res + '0';
                    push(stack, &idx, res_to_push);
                    break;

                case '/':
                    if (num2 != 0) {
                        res = num1 / num2;
                    printf("result is: %d\n", res);
                    res_to_push = res + '0';
                    push(stack, &idx, res_to_push);
                    break;
                    } else break;

            }
        }
    }

    // printf("stack contains: %s\n", stack);
    return 0;
    }
