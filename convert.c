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
#include "conversions.h"
#define DEFAULT_BASE 16

/**
 * Main function of the program
 * Arguments: int argc = number of arguments user enters with convert, char *argv[] arguments / flags user enters
 * Outputs: Outputs conversion results to stdout and errors to stderr
 * Returns: 1 or 0 if the program ends successfully or not
 */
int main(int argc, char *argv[]) {
    int base = DEFAULT_BASE;
    long start = 0;
    long finish = 0;

    // Checks the user's input and assigns values based on flags
    if (check_user_inputs(argc, argv, &base, &start, &finish) != 0) {
        return EXIT_FAILURE;
    }

    long input;
    int result = 2;
    do {
        if (result == 1 || start != 0 && finish != 0) {
            // Determins which conversion function to use based on flag values
            if (start == 0 && finish == 0) {
                if (input == 0) {
                    printf("0\n");
                } else {
                    convert_by_recursion(input, base);
                    printf("\n");
                }
            } else {
                convert_by_range(input, base, start, finish);
                return EXIT_SUCCESS;
            }
        } else if (result == 0) {
            printf("Error: Non-long-int token encountered.\n");
            return EXIT_FAILURE;
        }
    } while ((result = scanf("%ld", &input)) != EOF); // Loop until EOF

    return EXIT_SUCCESS;
}