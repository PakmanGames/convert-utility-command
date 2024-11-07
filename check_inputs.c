#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "messages.h"
#define MAX_BASE 36
#define MIN_BASE 2

/**
 * Check the user's input when they use convert command, assigns values based on flags
 * Arguments: int argc = number of arguments entered,
 *            char *argv[] = arguments / flags user enters with convert
 *            int *base = pointer to the base that will be used for the conversion
 *            long *start = pointer to start value if the range flag is indicated
 *            long *finish = pointer to end value if the range flag is indicated
 * Outputs: Outputs to stdout using functions from messages.c if invalid input or user uses --help flag
 * Return: 1 or 0 if the inputs are invalid or not
 */
int check_user_inputs(int argc, char *argv[], int *base, long *start, long *finish) {
    for (int i = 1; i < argc; i++) { // Loop through the arguments given
        if (strcmp(argv[i], "--help") == 0) { // Check if the help flag indicated
            print_help();
        } else if (strcmp(argv[i], "-b") == 0) {
            if (i + 1 < argc) { // Checks if the next argument after -b flag exists
                if (atoi(argv[i + 1]) > MAX_BASE || atoi(argv[i + 1]) < MIN_BASE) {
                    print_usage();
                    return EXIT_FAILURE;
                } else {
                    *base = atoi(argv[i + 1]);
                    i++;
                }
            } else {
                print_usage();
                return EXIT_FAILURE;
            }
        } else if (strcmp(argv[i], "-r") == 0) {
            if (i + 2 < argc) { // Checks if the next two arguments after -r flag exists
                *start = atol(argv[i + 1]);
                *finish = atol(argv[i + 2]);
                i += 2;
                if (*start > *finish) {
                    return EXIT_SUCCESS;
                }
            } else {
                print_usage();
                return EXIT_FAILURE;
            }
        } else {
            print_usage();
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}