#include "main.h"

/**
 * _isdigit - This checks for a digit (0-9).
 * @c: The input number to be checked.
 *
 * Return: 1 if the number is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
