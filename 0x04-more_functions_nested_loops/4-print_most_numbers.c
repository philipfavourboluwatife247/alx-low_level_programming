#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
	int favNum;

	for (favNum = 0; favNum <= 9; favNum++)
	{
		if (favNum != 2 && favNum != 4)
			_putchar((favNum % 10) + '0');
	}
	_putchar('\n');
}
