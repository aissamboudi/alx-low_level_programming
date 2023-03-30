#include "main.h"

/**
 * string_toupper - changes all lowercase
 * letters of a string to uppercase
 * @s: pointer to char
 * Return: point to char (s)
 */
char *string_toupper(char *s)
{
	int cpt = 0;

	while (*(s + cpt))
	{
		if (*(s + cpt) >= 97 && *(s + cpt) <= 122)
			*(s + cpt) = *(s + cpt) - 32;
		cpt++;
	}

	return (s);
}
