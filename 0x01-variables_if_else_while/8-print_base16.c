#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 * Return: return type is 0
 */
int main(void)
{
	char base16[16] = "0123456789abcdef"
	int i;
	for (i = 0; i < 16; i++)
	{
		putchar(base16[i]);
	}
	putchar('\n');
	return (0);

}
