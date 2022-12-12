#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: return type is 0
 */
int main(void)
{
	char base16;

	int i;

	base16 = 'a';
	i = 0;

	while (i < 10)
	{
	putchar(i + '0');
	i++;
	}
	while (base16 <= 'f')
	{
	putchar(base16);
	base16++;
	}
	putchar('\n');
	return (0);

}
