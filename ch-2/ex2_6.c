#include <stdio.h>

unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p + 1 - n)) & ~(~0 << n);
}

unsigned rightmost(unsigned x, int n) {
    // n is the number of bits to extract from the right

    return (x & ~(~0 << n));
}


unsigned setbits(unsigned x, int p, int n, unsigned y) {
    // n is the number of bits to be changed
    // p is the position of the first bit to be changed
    // y is the other binary representation from which bits are to be extracted
    // example: 00110101 >> 2 -> 00001101 (the length is kept but 0s are added where necessary)
    // cont.d: ~(~0 << n) -> ~(11111111... << n) -> assuming n is 2 we would get: ~(11111...00)
    // -> the final complement results in 00000...11 -> now when this mask is applied with a 
    // bitwise & operator we get that only the last n (in this case 2) bits from the original
    // bit sequence are returned

    // get rightmost bits from y
    unsigned bits_y = rightmost(y, n);

    // shift bit sequence and isolate the bits that would get lost
    unsigned bits_x = getbits(x, p, n);
    // shift bits in x from p to n to the rightmost sequence
    unsigned final_bits = (x >> (p + 1 - n));

    // main problem: unable to understand how I could set specific bits to some others using only basic operations.
    // Objective: clear this problem after having tackled similar ones
    

}


int main(void) {
    printf("unsigned print: %u\n", getbits(54, 2, 2));
    // 54 in binary is 110110
    // shift right by 1 -> 011011
    // extract last 2 bits
    // get 3 (decimal) since its binary representation is 11
    
    printf("the 2 rightmost bits of 54 produce the number: %u\n", rightmost(54, 2));
    printf("test for setbits: %u\n", setbits(54, 1, 2, 21));
    return 0;
}
