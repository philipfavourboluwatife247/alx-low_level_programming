/*
 * Auth: Philip Favour B.
 * File: 0-memset.c
 */
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: First n byte of the memory area
 * @s: pointer to the memory area of n
 * @b: a constant byte
 *
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
