#include <stdlib.h>
#include <stdio.h>

void convert_by_recursion(long input, int base) {
    if (input == 0) {
        return;
    } else if (input < 0) {
        printf("-");
        input *= -1;
    }

    convert_by_recursion(input / base, base);
    const char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%c", digits[input % base]);
}

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