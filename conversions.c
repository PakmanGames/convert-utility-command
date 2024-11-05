#include <stdlib.h>
#include <stdio.h>

/**
 * Converts specified value into new base and prints to stdout
 * Arguments: long input = the input value to be changed, int base = the new base the value will be changed to
 * Outputs: Outputs to stdout the newly converted input
 * Returns: none
 */
void convert_by_recursion(long input, int base) {
    const char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if (input == 0) {
        return;
    } else if (input < 0) {
        printf("-");
        input *= -1;
    }

    convert_by_recursion(input / base, base);

    printf("%c", digits[input % base]);
}

/**
 * Converts numbers within a range into a new specified base
 * Arguments: long input = the input value to be changed
 *            int base = the new base the value will be changed to
 *            long start = start value of loop
 *            long finish = finish value of loop
 * Outputs: Outputs to stdout the newly converted number using convert_by_recursion()
 * Returns: none
 */
void convert_by_range(long input, int base, long start, long finish) {
    for (long i = start; i <= finish; i++) {
        if (i == 0) {
            printf("0\n");
            i++;
        }

        convert_by_recursion(i, base);

        printf("\n");
    }
}