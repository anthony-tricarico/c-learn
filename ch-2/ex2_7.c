#include <stdio.h>

unsigned invert(unsigned x, int p, int n) {

    /* p is the position where I start changing the bits
     * n is the number of bits I change
     * approach:
     * 1. apply complement (~) function on subset of bits to change*/

    // how do I isolate the interval I need to apply ~ on?
    // apply mask to the bit I want to change, then apply complement on those, then remove the mask
    return (x & (~0 >> (p + 1 - n)));
}

int main(void) {
    unsigned num = 54;
    
    printf("the masked bits are: %u\n", invert(num, 1, 2));

    return 0;
}
