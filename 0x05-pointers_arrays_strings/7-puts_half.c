/*
 * File: 7-puts_half.c
 * Auth: Philip Favour B.
 */

#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int index = 0, l = 0, n;

	while (str[index++])
		l++;

	if ((l % 2) == 0)
		n = l / 2;

	else
		n = (l + 1) / 2;

	for (index = n; index < l; index++)
		_putchar(str[index]);

	_putchar('\n');
}
