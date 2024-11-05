/**
 * convert function that converts numbers into specified base (16 by default),
 * takes input from stdin or goes through a specified range
 * Andy Pak, McMaster University, 2024
 * Additional sources used: manual page for scanf()
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "check_inputs.h"
#define DEFAULT_BASE 16

// TODO Function to read command line flags

// TODO Recursively changing base with convert function

void convert_by_recursion(long input, int base);
void convert_by_range(long input, int base, int start, int finish);

int main(int argc, char *argv[]) {
    int base = DEFAULT_BASE;
    long start = 0;
    long finish = 0;
    if (check_user_inputs(argc, argv, &base, &start, &finish) != 0) {
        return EXIT_FAILURE;
    }

    long input;
    int result;
    while ((result = scanf("%ld", &input)) != EOF) {
        if (result == 1) {
            if (start == 0 && finish == 0) {
                if (input == 0) {
                    printf("0\n");
                } else {
                    convert_by_recursion(input, base);
                    printf("\n");
                }
            } else {
                convert_by_range(input, base, start, finish);
            }
        } else if (result == 0) {
            printf("Error: Non-long-int token encountered.\n");
            return EXIT_FAILURE;
        }
    }

    return EXIT_SUCCESS;
}

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

void convert_by_range(long input, int base, int start, int finish) {
    printf("not done\n");
}