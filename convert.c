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
            // FOR TESTING
            printf("YOu entered %ld\n", input);
        } else if (result == 0) {
            printf("Error: Non-long-int token encountered.\n");
            return EXIT_FAILURE;
        }
    }

    return EXIT_SUCCESS;
}