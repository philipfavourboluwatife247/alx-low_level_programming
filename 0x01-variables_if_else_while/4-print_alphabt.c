#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all letters in lower case except q and e followed by a new line
 *
 * Return: return type is 0
 */
int main(void)
{
	char alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);

}
