#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: 0 or 1 or number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numb = 0;
	int l = 0;

	if (b[l] == '\0')
		return (0);

	while ((b[l] == '0') || (b[l] == '1'))
	{
		numb <<= 1;
		numb += b[l] - '0';
		l++;
	}

	return (numb);
}
