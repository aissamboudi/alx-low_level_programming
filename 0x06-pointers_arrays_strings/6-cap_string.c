#include "main.h"

/**
 * cap_string - capitalizes a text
 * @s: Text
 * Return: adresse s
 */
char *cap_string(char *s)
{
	int cpt = 0;

	if (*s >= 97 && *s <= 122)
		*s = *s - 32;
	while (*(s + cpt))
	{
		if (*(s + cpt) == ' ' || *(s + cpt) == '\t' || *(s + cpt) == '\n'
				|| *(s + cpt) == ',' || *(s + cpt) == ';' || *(s + cpt) == '.'
				|| *(s + cpt) == '!' || *(s + cpt) == '?' || *(s + cpt) == '"'
				|| *(s + cpt) == '(' || *(s + cpt) == ')'
				|| *(s + cpt) == '{' || *(s + cpt) == '}')
		{
			cpt++;
			if (*(s + cpt) >= 97 && *(s + cpt) <= 122)
				*(s + cpt) = *(s + cpt) - 32;
			else
				cpt--;
		}
		cpt++;
	}

	return (s);
}
