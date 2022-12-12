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
	int p;

	p = 0;

	while (p < 10) 
	{
	putchar(p + '0');
	p++;
	}
	putchar('\n');
	return (0);

}

