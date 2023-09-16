#include <stdio.h>

// int main (int argc, char* argv[])
// argc = number of start arguments
// argv = array of start arguments
int main (int argc, char* argv[]) {
    if (argc != 2) {
        printf("Wrong number of arguments! Expected 1, received %d\n", argc);
        printf("Usage: %s <arg>\n", argv[0]);
        return -1;
    }
    printf("arg = \"%s\"\n", argv[1]);

    return 1;
}
