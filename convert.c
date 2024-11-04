#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define DEFAULT_BASE 16

// TODO Include 2 more .c files with .h

// TODO Global constants for max and min base and other values

// TODO Function to validate input
void print_usage();

void print_help();

// TODO Function to read command line flags

// TODO Recursively changing base with convert function

int main(int argc, char *argv[]) {
    // TODO read flags function and store values to var based on flags using pointers

    //convert -b 16 -r 1 5 // max is 6 arguments [1] is first flag which can be --help
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--help") == 0) {
            print_help();
        } else {
            print_usage();
        }
    }
    return EXIT_SUCCESS;
}

void print_usage() {
    printf("Usage: convert [-b BASE] [-r START FINISH]\n");
    printf("       1 < BASE < 37\n");
    printf("       START and FINISH are long integers\n");
}

void print_help() {
    printf("Usage: convert [-b BASE] [-r START FINISH]\n");
    printf("\n");
    printf("Arguments: \n");
    printf(" BASE        The new radix (base) that inputs will be converted to.\n");
    printf("             Can range from 2 to 36 (inclusive), default value of 16\n");
    printf(" START       A long integer, representing the starting range\n");
    printf(" FINISH      A long integer, representing the ending range\n");
    printf("\n");
    printf("Flags: \n");
    printf(" --help      A linux style help, the one you are currently reading\n");
    printf(" -b          Use specified BASE as conversion base\n");
    printf(" -r          Output conversions of integers in the specified START AND FINISH range\n");
}