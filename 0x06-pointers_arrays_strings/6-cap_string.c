#include "main.h"

/**
 * cap_string - capitalizes a text
 * @s: Text
 * Return: adresse s
 */
char *cap_string(char *s)
{
	int cpt = 0;

	while (*(s + cpt))
	{
		if (*(s + cpt) == ' ' || *(s + cpt) == '\t' || *(s + cpt) == '\n'
				|| *(s + cpt) == ',' || *(s + cpt) == ';' || *(s + cpt) == '.'
				|| *(s + cpt) == '!' || *(s + cpt) == '?' || *(s + cpt) == '"'
				|| *(s + cpt) == '(' || *(s + cpt) == ')' || *(s + cpt) == '{'
				|| *(s + cpt) == '}')
		{
			cpt++;
			if (*(s + cpt) >= 97 && *(s + cpt) <= 122)i
				*(s + cpt) = *(s + cpt) - 32;
			else if (*(s + cpt) >= 65 && *(s + cpt) <= 90)
				cpt++;
			cpt--;
		}
		cpt++;
	}
	if (*s >= 97 && *s <= 122)
		*s = *s - 32;

	return (s);
}
