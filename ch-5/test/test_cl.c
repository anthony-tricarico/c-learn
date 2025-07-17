#include <stdio.h>

int main(int argc, char *argv[]) { // standard construction of function taking inputs from command line
    // print sum of two numbers
    int counter = 0;
    int arr[2];
    printf("argc is: %d\n", argc);
    // the while proceeds for one more loop than it should be used for, so the condition
    // becomes counter > 1
    while (argc - counter > 1) {
        arr[counter] = (*++argv)[0] - '0';
        printf("character is %c\n", (*argv[0]));
        printf("digit is %d\n", (*argv[0]) - '0');
        printf("digit in array is %d\n", arr[counter]);

        counter++;
    }

    int cur_num = 0;
    for (int i = 0; i < 2; i++) 
        cur_num += arr[i];

    printf("the final sum is: %d\n", cur_num);
    return 0;
}
