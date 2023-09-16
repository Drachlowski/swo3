#include <stdio.h>
#include <stddef.h>

struct node
{
    int value;
    struct node *next;
};


void print_nodes (struct node *p) {
    if (p != NULL) {
        printf("%d\n", p->value);
        print_nodes(p->next);
    }
}


void insert_node (int value) {
    
}

int fibonacci (int n) {
    if (n < 1) return 0;
    if (n <= 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    printf("Hello, World!\n");
    struct node *head = NULL;
    printf("%d \n", fibonacci(1));
    printf("%d \n", fibonacci(2));
    printf("%d \n", fibonacci(3));
    printf("%d \n", fibonacci(4));
    printf("%d \n", fibonacci(5));
    printf("%d \n", fibonacci(6));
    printf("%d \n", fibonacci(7));
    printf("Hello World\n");
    return 0;
    // hello
}
