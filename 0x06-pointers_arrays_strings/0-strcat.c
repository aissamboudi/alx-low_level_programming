#include "main.h"
/**
 * _strcat - concat two
 * @dest: first string
 * @src: second string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		if (*dest == '\0')
		{
			*dest = *src;
			src++;
		}
		dest++;
	}
	return (dest);
}
