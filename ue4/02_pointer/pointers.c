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
   UNUSED(s);
   // TODO
}

void print_char_pointer(char *s) {
  UNUSED(s);
  // TODO
}

void test_print(void) {
  // TODO
}

int my_strncmp(char *a, char *b , int maxlen) {
  UNUSED(a); UNUSED(b); UNUSED(maxlen);
  // TODO
  return 0;
}
#define MYCMP(a, b) DEBUG(my_strncmp(a, b, MIN_ALEN(a, b)))

void test_my_strncmp(void) {
#if 0
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
  UNUSED(a); UNUSED(len);
  // TODO
}

void test_array_of_pointers(void) {
  // TODO
}

void test_pointer_of_pointer(void) {
  // TODO
}


void test_function_pointer(void) {
  // TODO
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