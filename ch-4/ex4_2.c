#include <stdio.h>
#include <ctype.h>

// #define TRUE 1
// #define FALSE 0
/* define isdigit which determines wheter a single char is a digit or not 
 * returning 1 if True or 0 if False according to the boolean logic embedded in C

int isdigit(char s) {
    int res;
    res = (s >= '0' && s <= '9') ? TRUE : FALSE;

    return res;
}

int isspace(char s) {
    int res;
    res = (s == ' ') ? TRUE : FALSE;

    return res;
}

*
* I did not notice that these functions were already implemented in the header ctype.h so I wrote
* them again.*/

/* atof: convert string s to double */
/* Task: Extend atof to handle scientific notation of the form 123.45e-6 */

double atof(char s[]) {
    double val, power; 
    double power_exp = 1.0;

    int i, sign, sign_exp;

    for (i = 0; isspace(s[i]); i++) /* skip white space */
        ; // notice the simplest do-nothing null statement in C (;)

    // assumes sign is always the first element from the left
    sign = (s[i] == '-') ? -1 : 1;
    // skips the sign after it has been recorded in its omonymous variable
    if (s[i] == '+' || s[i] == '-') i++;
    // until the character is a digit, add its decimal representation to the
    // value of val. This works because * has higher precedence on the + operator.
    // At the beginning of the first iteration val will be 0, but at the end it will be equal to
    // the numerical value of the character.
    // At the next iteration this value will be multiplied by 10 and the numerical value of the other
    // character will be added to it.
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    // whenever the . is encountered, go on
    if (s[i] == '.') i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        // At this point, val is already a defined non-zero value (unless input was 0)
        // however, notice that this is executed only when a . has been encountered in the input
        // Therefore, this handles the decimal part of a string number representation!
        // since we will divide by the power, this power will signal how many numbers are
        // in the decimal part of the input.
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }
    // to add scientific notation functionality now we have to divide or multiply
    // by a power of 10 the final val obtained so far
    if (s[i] == 'e' || s[i] == 'E') i++;

    sign_exp = (s[i] == '-') ? -1 : 1;
    i++;

    if (isdigit(s[i])) {
        for (int iter = 1; iter <= (s[i] - '0'); iter++) {
                power_exp *= 10; 
            printf("value of power is %.10f\n", power);
    }
    }
    if (sign_exp == -1) {
        return sign * val / power / power_exp;
    } else return sign * val / power * power_exp;
    // example: try the string "145.05"
    // val = 10 * 0 + 1 -> 1
    // val = 1 * 10 + 4 -> 14
    // val = 14 * 10 + 5 -> 145
    // now I encounter a '.' which is not a digit, so I skip it and increase the index entering the
    // power for loop
    // here we now increase by a factor of 10 the power initialized to 1.0 at the
    // beginning of the loop for every digit after the decimal separator '.'
    // while adding the numbers to the end of the final value following the 
    // algorithm presented before.
}

int main(void) {
    char s[] = "123.45e-6";

    double res = atof(s);

    printf("the converted number from string is: %.10f\n", res);

    return 0;
}
