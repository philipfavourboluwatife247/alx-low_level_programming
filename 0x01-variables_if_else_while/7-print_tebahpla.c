#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints the lowercase alphabet in reverse
 *
 * Return: return type is 0
 */
int main(void)
{
	char revAlpha[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(revAlpha[i]);
	}	putchar('\n');
	return (0);

}
