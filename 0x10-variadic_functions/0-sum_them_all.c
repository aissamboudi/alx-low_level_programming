#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: Count of args
 * Return: sum of params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list param_list;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(param_list, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(param_list, int);

	va_end(param_list);

	return (sum);
}
