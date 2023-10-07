#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#ifndef LANG
  #define LANG 1
#endif

#if LANG==1
char *hello = "Hallo, Welt!";
#elif LANG==2
char *hello = "Hola, mundo!";
#elif LANG==3
char *hello = "Privit, svit!";
#else
char *hello = "Hello, World!";
#endif

#line 10
#line 100 "../src/hello.x"
#ifdef warn
#warning This is a test warning
#endif
int main() {
  printf("%s\n", hello);
  printf("LINE %d in FILE \"%s\"\n", __LINE__, __FILE__);
  printf("VERSION = %s\n\n", __VERSION__);
  assert(100 < 10);

  return 0;
}