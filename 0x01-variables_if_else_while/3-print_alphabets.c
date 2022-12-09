#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet in lower case and then upper case followed by a new line
 *
 * Return: return type is 0
 */
int main(void)
{
	char lowerAlph[26] = "abcdefghijklmnopqrstuvwxyz";
	char upperAlph[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lowerAlph[i]);
		putchar(upperAlph[i]);
	}
	putchar('\n');
	return (0);

}
