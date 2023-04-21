#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: Separator
 * @n: Count of given params
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list param_list;
	unsigned int i;

	va_start(param_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(param_list, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
