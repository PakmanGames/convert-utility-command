#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "check_inputs.h"
#define DEFAULT_BASE 16

// TODO Include 2 more .c files with .h

// TODO Global constants for max and min base and other values

// TODO Function to read command line flags

// TODO Recursively changing base with convert function

int main(int argc, char *argv[]) {
    int base = DEFAULT_BASE;
    long start = 0;
    long finish = 0;
    // TODO read flags function and store values to var based on flags using pointers

    if (check_user_inputs(argc, argv, &base, &start, &finish) != 0) {
        return EXIT_FAILURE;
    }

    // for testing
    printf("YOUR BASE IS %d\n", base);
    
    return EXIT_SUCCESS;
}