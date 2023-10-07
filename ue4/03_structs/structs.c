#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

typedef struct address { 
  char street[40]; // NOTE: must contain size or be pointer   
  int nr; 
  int zip; 
  char *city; // NOTE: for pointer, only address is copied 
} address_t; 

void print_address_v(address_t a) { 
  printf("%s %d\n%d %s\n", a.street, a.nr, a.zip, a.city); 
}

void print_address_p(address_t* a) {
  // we have to dereference first and need () because of perator precedence 
  // printf("%s %d\n%d %s\n", (*a).street, (*a).nr, (*a).zip, (*a).city);

  // use this version instead
  printf("%s %d\n%d %s\n", a->street, a->nr, a->zip, a->city);
}

// select which function (for demo purposes only)

// with struct: print_address_v(a)
#define print_address(a) print_address_v((a))

// with pointer: print_address_p(&a)
//#define print_address(a) print_address_p((&a))

int main(void) {

  address_t a; 
  strncpy(a.street, "Softwarepark", ALEN(a.street)); 
  a.nr = 11; 
  a.zip = 4232; 
  a.city = malloc(sizeof(*a.city) * 50); 
  if (a.city == NULL) { 
    printf("out of memory!\n"); 
    return -1; 
  } 
  strncpy(a.city, "Hagenberg", 50); 
  print_address(a); 

  printf("copying address...\n"); 
  address_t a2 = a; // NOTE: copied 
  print_address(a2); 

  printf("updating address 1...\n"); 
  // strncpy(a.street, "Hauptplatz", 40); 
  // a.nr = 1; 
  // a.zip = 4020; 
  strncpy(a.city, "LINZ!", 50); // NOTE: city now both Linz 

  printf("address 1:\n"); 
  print_address(a); 

  printf("address 2 (implicitly updated through common pointer):\n"); 
  print_address(a2); 

  free(a.city); // NOTE: always free allocated memory 
  printf("sizeof(a) = %ld", sizeof(a));
  
  return 0;
}