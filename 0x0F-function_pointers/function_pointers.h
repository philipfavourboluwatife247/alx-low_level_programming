#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*
 * Auth: Philip Favour Boluwatife
 * File: function_pointers.h
 * Desc: This is the header file
 *	of all the prototypes
 *	used in this task
 */

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
