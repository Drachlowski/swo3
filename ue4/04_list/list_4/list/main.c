#include <stdio.h>
#include "list.h"

#define DEBUG(x) printf("%s -> %d\n", (#x), (x))

void print_int(int value) {
	printf("%d,", value);
}

int main(void) {
	list_t* list = create_list();

	DEBUG(length(list));
	prepend(list, 1);
	prepend(list, 8);
	prepend(list, 3);
	prepend(list, 7);
	prepend(list, 9);
	prepend(list, 10);

	DEBUG(length(list));
	print_list(list);

	for_each(list, print_int);

	destroy(&list);

	return 0;
}
