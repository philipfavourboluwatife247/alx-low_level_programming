#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the character \.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int lengthOfLine;
	int space;

	if (n > 0)
	{
		for (lengthOfLine = 0; lengthOfLine < n; lengthOfLine++)
		{
			for (space = 0; space < lengthOfLine; space++)
				_putchar(' ');
			_putchar('\\');

			if (lengthOfLine == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
