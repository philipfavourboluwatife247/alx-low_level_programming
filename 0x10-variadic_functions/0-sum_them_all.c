/*
 * Auth: Philip Favour B.
 * File: 0-sum_them_all.c
 */
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its arguments
 * @n: number of parameters passed
 * @...: Variadic list of numbers to add
 * Return: 0 if n == 0
 *	else the sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numlist;
	unsigned int index, add = 0;

	va_start(numlist, n);

	for (index = 0; index < n; index++)
		add += va_arg(numlist, int);

	va_end(numlist);
	return (add);
}
