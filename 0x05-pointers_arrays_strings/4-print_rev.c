#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int l = 0, myNum;

	while (s[myNum++])
		l++;

	for (myNum = l - 1; myNum >= 0; myNum--)
		_putchar(s[myNum]);

	_putchar('\n');
}
