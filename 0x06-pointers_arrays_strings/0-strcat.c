#include "main.c"
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
		if (*(dest + 1) == '\0')
		{
			*(dest + 1) = *src;
			*(dest + 1) = '\0';
			src++;
		}
		dest++;
	}
	return (dest);
}
