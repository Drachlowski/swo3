// file: pointers/pointers.c

#include <stdlib.h> // for malloc & free
#include <stdio.h>
#include <string.h> 
#include "utils.h"

#define LENGTH 50

void test_malloc(void) {
  char *s = malloc(sizeof(*s) * LENGTH);

  if (s == NULL) {
    printf("out of memory\n");
    return;
  }
  strncpy(s, "Hello, dynamic memory!\n", LENGTH);
  printf("%s", s);

  free(s);
}

void print_char_array(char s[]) {
  for (int i = 0; s[i] != '\0'; i += 1) {
    putchar(s[i]);
  }
}

void print_char_pointer(char *s) {
  // for (int i = 0; s[i] != '\0'; i += 1) {
  //   putchar(s[i]);
  // }
  while (*s != '\0') {
    putchar(*s);
    s += 1;
  }
}

void test_print(void) {
  char s[] = "Hello World\n";
  print_char_array(s);
  print_char_pointer(s);
}

int my_strncmp(char *a, char *b , int maxlen) {
  int i;
  for (i = 0; i < maxlen && a[i] != '\0' && b[i] != '\0'; i += 1) {
    if (a[i] != b[i]) {
      return (int)a[i] - (int)b[i];
    }
  }
  if (a[i] != '\0') return +(int)a[i];
  if (b[i] != '\0') return -(int)b[i];
  return 0;
}
#define MYCMP(a, b) DEBUG(my_strncmp(a, b, MIN_ALEN(a, b)))

void test_my_strncmp(void) {
#if 1
  char a[] = "AAA";
  char aa[] = "AAAA";
  char b[] = "AAB";
  char c[] = "C";
  char empty[] = "";


  printf("a = '%s', aa = '%s', b = '%s', c = '%s', empty = '%s'\n",
         a, aa, b, c, empty);
  MYCMP(a, aa);
  MYCMP(a, b);
  MYCMP(a, c);
  MYCMP(a, empty);
  MYCMP(aa, b);
  MYCMP(aa, c);
  MYCMP(aa, empty);
  MYCMP(b, c);
#endif
}

void print_array_of_pointers(const char *a[], int len) {
  for (int i = 0; i < len; i += 1) {
    printf("%s ", a[i]);
  }

  printf("\n");
}

void test_array_of_pointers(void) {
  const char *a[] = {"Hello", "dynamic array"};
  print_array_of_pointers(a, ALEN(a));
}

void test_pointer_of_pointer(void) {
  int x = 123;
  int *p = &x;
  int **pp = &p;

  printf("x = %d\n", x);
  printf("pointer (%p) to x = %d\n", (void*)p, *p);
  printf("pointer (%p) to pointer (%p) to x = %d\n", (void*)pp, (void*)*pp, **pp);
}


int add (int a, int b) { return a + b; }
int sub (int a, int b) { return a - b; }
char invalid_int_op (char a, char b) { return a + b; }

typedef int (*binary_int_op_t) (int, int);

void test_function_pointer(void) {
  binary_int_op_t ops[] = { &add, &sub };
  for (int i = 0; i < ALEN(ops); i += 1) {
    printf("operation %d: restult = %d\n", i, ops[i](3, 5));
  }
}

int main(void) {
  test_malloc();
  test_print();
  test_my_strncmp();
  test_array_of_pointers();
  test_pointer_of_pointer();
  test_function_pointer();

  return 0;
}