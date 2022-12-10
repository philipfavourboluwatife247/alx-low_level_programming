#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 * Return: return type is 0
 */
int main(void)
{
	char base16;

	int i;

	base16 ='a';
	while (i < 10)
	{
		putchar(i + '0');
		d++;
	}
	while (base16 <= 'f')
	{
		putchar(base16);
		base16++;
	}
	putchar('\n');
	return (0);

}
