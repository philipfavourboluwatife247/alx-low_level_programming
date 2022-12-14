#include "main.h"

/**
 * _isalpha - functions that checks for alphabetic character
 * @c: single letter input value
 * Return: 1 if c is a letter and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
