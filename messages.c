#include <stdio.h>

/**
 * Prints to stdout the proper usage of the convert utility
 * Arguments: none
 * Outputs: Prints to stdout
 * Returns: none
 */
void print_usage() {
    printf("Usage: convert [-b BASE] [-r START FINISH]\n");
    printf("       1 < BASE < 37\n");
    printf("       START and FINISH are long integers\n");
}

/**
 * Prints to stdout the detailed help page
 * Arguments: none
 * Outputs: Prints to stdout
 * Returns: none
 */
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