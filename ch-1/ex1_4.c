#include <stdio.h>

int main(void) {
    float fahr, celsius;
    float lower, upper, step;

    lower = -10;
    upper = 40;
    step = 5;

    printf("Cels Fahr\n");

    while(celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
