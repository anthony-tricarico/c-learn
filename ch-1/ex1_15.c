#include <stdio.h>

int convert_to_fahr (float celsius) {
    float fahr;

    fahr = (9.0 / 5.0) * celsius + 32.0;
    return fahr;
}

int main(void) {
    float lower, upper, step;

    lower = -10.0;
    upper = 40.0;
    step = 5.0;

    printf("Cels Fahr\n");
    
    float celsius = lower;

    while(celsius <= upper) {
        float fahr = convert_to_fahr(celsius);
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }

return 0;
}
