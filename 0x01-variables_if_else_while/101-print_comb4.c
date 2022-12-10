#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 1000; a++)
	{
		putchar(a + '0');
		if (a < 999)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
