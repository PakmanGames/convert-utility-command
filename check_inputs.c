#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "messages.h"

int check_user_inputs(int argc, char *argv[], int *base, long *start, long *finish) {
    //convert -b 16 -r 1 5 // max is 6 arguments [1] is first flag which can be --help
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--help") == 0) {
            print_help();
        } else if (strcmp(argv[i], "-b") == 0) {
            if (i + 1 < argc) {
                if (atoi(argv[i + 1]) >= 37) {
                    print_usage();
                    return EXIT_FAILURE;
                } else {
                    *base = atoi(argv[i + 1]);
                    i++;
                    printf("TESTING, base is %d\n", *base);
                }
            } else {
                print_usage();
                return EXIT_FAILURE;
            }
        } else if (strcmp(argv[i], "-r") == 0) {
            if (i + 2 < argc) {
                *start = atol(argv[i + 1]);
                *finish = atol(argv[i + 2]);
                i += 2;
                printf("TESTING, start is %ld, finish is %ld\n", *start, *finish);
                if (*start > *finish) {
                    return EXIT_FAILURE;
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