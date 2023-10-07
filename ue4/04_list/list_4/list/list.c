#include "list.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


typedef struct node {
	int value;
	struct node* next;
} node_t;


struct list {
	node_t* first;
	int n;
};

list_t* create_list (void) {
	list_t* list = malloc(sizeof(list_t));

	if (list == NULL) return NULL;

	list->first = NULL;
	list->n = 0;

	return list;
}

int length (list_t* list) {
	assert(list != NULL);
	return list->n;
}


static node_t* create_node (int value) {
	node_t* n = malloc(sizeof(node_t));

	if (n == NULL) return NULL;
	
	n->value = value;
	n->next = NULL;

	return n;
}

bool prepend (list_t* list, int value) {
	node_t* new_node = create_node(value);

	if (new_node == NULL) {
		printf("WARNING: out of memory, could not prepend!\n");
		return false;
	}

	new_node->next = list->first;
	list->first = new_node;
	list->n = (list->n) + 1;

	return true;
}

static void print_node(node_t* node) {
	if (node == NULL) return;

	printf("%d ", node->value);
	return print_node(node->next);
}

void print_list (list_t* list) {
	printf("n=%d: ", list->n);
	node_t* current = list->first;

	while (current != NULL) {
		printf("%d", current->value);
		current = current->next;
		
		if (current != NULL) printf(", ");
	}
	
	printf("\n");
}

void for_each(list_t* list, iterator_t it) {
	node_t* current = list->first;
	while (current != NULL) {
		it(current->value);
		current = current->next;
	}
}




void destroy(list_t** list_handle) {
	if (list_handle == NULL) return;

	node_t* current = (*list_handle)->first;
	while (current != NULL) {
		node_t* next = current->next;
		free(current);
		current = next;
	}
	free(*list_handle);
	*list_handle = NULL;
}