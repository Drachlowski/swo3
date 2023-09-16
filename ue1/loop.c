/*
    Author: Andreas Neubauer

    Programm with a for loop to demonstrate the debugging-functionalities
    build-command: gcc -ggdb3 -Wall -Wextra -o loop loop.c
    debug-command: gdb loop
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
    int i = 0;

    for (i = 0; i < 10; i += 1) {
        i *= 2; // i = i * 2
    }

    printf("i is %d \n", i);

    return EXIT_SUCCESS;
}

