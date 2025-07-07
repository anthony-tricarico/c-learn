#include <stdio.h>

/* In a two's complement number system, x &= (x - 1) deletes the rightmost 1-bit in x.
 * 1. Explain why
 * 2. Use this observation to write a faster version of bitcount*/

/* 1: When we use the assignment operator &= we simultaneously check that the bit position of 
 * x and (x-1) are the same and we also replace the value of x with the value of x - 1
 * This happens because when we subtract 1 from a binary number all the trailing 0s are flipped to 1s
 * and the rightmost 1 is set to 0.
 * The assignment operator &= compares the bits of x and (x-1) and if both bits are 1 that 1 is
 * retained, otherwise it becomes 0.*/

int bitcount(unsigned x) {
    int count = 0;

    while (x != 0) {
        // being equal to 0 means all bits have been set to 0
        count += 1;
        // keep iterating until you get a sequence of bits where all rightmost
        // 1s entries have been deleted
        x &= (x-1);
    }

    return count;
}

int main(void) {
    unsigned num = ;
    printf("the number %u contains %u active bits\n", num, bitcount(num));
    return 0;
}
