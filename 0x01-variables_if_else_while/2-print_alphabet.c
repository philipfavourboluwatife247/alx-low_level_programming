#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program prints alphabet in lowercase
 *
 * Return: return type is 0
 */
int main(void)
{
	char alphaGame[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphaGame[i]);
	}
	putchar('\n');
	return (0);

}
