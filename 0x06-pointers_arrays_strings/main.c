#include "main.h"
#include <stdio.h>
#include "0-strcat.c"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "abcdefgh";
	char s2[] = "ijklmnop\n";
	char *ptr;
	
	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
