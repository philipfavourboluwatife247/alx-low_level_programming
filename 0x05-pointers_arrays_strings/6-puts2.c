/*
 * File: 6-puts2.c
 * Auth: Philip Favour B.
 */

#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int index = 0, l = 0;

	while (str[index++])
		l++;

	for (index = 0; index < l; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
