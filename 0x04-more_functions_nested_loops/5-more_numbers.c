#include "main.h"

/**
 * more_numbers - prints 0 to 14, 10 times
 */
void more_numbers(void)
{
	int favNum;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (favNum = 0; favNum <= 14; favNum++)
		{
			if (favNum > 9)
				_putchar((favNum / 10) + '0');
			_putchar((favNum % 10) + '0');
		}
		_putchar('\n');
	}
}
