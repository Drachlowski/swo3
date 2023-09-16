#include <stdio.h>
#include <stdlib.h>

// int main (int argc, char* argv[])
int main (int argc, char* argv[]) {
    int sum = 0;

    // i++ would be a possibility, but it's gross, ewwwwww
    for (int i = 1; i < argc; i = i + 1) {
        // atoi converts a string into an integer
        // sum += atoi(argv[i]);
        int num = 0;
        int count = sscanf(argv[i], "%d", &num);

        if (count) sum += num;
        else printf("Invalid input (%s)\n", argv[i]);
    }

    printf("sum = \"%d\"\n", sum);

    return EXIT_SUCCESS;
}
