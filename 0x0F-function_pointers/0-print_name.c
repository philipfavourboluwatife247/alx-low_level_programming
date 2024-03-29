/*
 * Auth: Philip Favour B.
 * File: 0-print_name.c
 */

#include "function_pointers.h"
/**
 * print_name - This function prints a name
 * @name: The name to be printed
 * @f: pointer to a function
 *	 that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
