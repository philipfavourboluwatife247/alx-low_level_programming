#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
	int favNum;

	for (favNum = 0; favNum <= 9; favNum++)
		_putchar((favNum % 10) + '0');

	_putchar('\n');
}
