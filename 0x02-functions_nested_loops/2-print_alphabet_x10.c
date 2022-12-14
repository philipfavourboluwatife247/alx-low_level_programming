#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char l;

	int i;

	for (i = 1; i <= 10; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}

