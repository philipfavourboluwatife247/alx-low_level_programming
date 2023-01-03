/*
 * Auth: Philip Favour B.
 * File: 2-strchr.c
 */
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @c: The character memory area
 * @s: The string memory area
 *
 * Return: a pointer to the 1st occurence of c in s
 */
char *_strchr(char *s, char c)
{
	int j = 0;
	int k;

	while (s[j])
	{
		j++;
	}

	for (k = 0; k <= j; k++)
	{
		if (c == s[k])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
