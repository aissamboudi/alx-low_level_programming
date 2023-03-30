#include "main.h"

/**
 * leet - 1337's string
 * @s: target string
 * Return: pointer s
 */
char *leet(char *s)
{
	int cpt = 0;
	char *alp = "aAeEoOtTlL";
	char *num = "4433007711";

	while (*(s + cpt))
	{
		for (int i = 0; i < 10; i++)
		{
			if (*(s + cpt) == *(alp + i))
				*(s + cpt) = *(num + i);
		}
		cpt++;
	}

	return (s);
}
