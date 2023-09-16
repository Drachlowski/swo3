/*
    Author: Andreas Neubauer

    This file provides the main function and should demonstrate the usage of modules in C.

    build-cmd: gcc -ggdb3 -Wall -Wextra lib.c main.c

    Notice: When you forget lib.c, there will be a linker error!
*/

#include <stdio.h>
#include "lib.h"

int main () {
    int value_a = 10;
    int value_b = 20;

    int add_test = add(value_a, value_b);
    int sub_test = sub(value_a, value_b);

    printf("add_test => add(value_a, value_b) = %d \n", add_test);
    printf("sub_test => sub(value_a, value_b) = %d \n", sub_test);
}