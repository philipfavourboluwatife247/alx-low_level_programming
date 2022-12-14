#include "main.h"

/**
 * _islower - This is a function that checks for lowercase character
 * @c: single letter input value
 * Return: return 1 if int c is lowercase else 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
