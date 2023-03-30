#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy from src
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cpt = 0;

	while (i < n && *(src + cpt))
	{
		*(dest + cpt) = *(src + cpt);
		i++;
	}

	while (i < n)
	{
		*(dest + cpt) = '\0';
		cpt++;
	}

	return (dest);
}
