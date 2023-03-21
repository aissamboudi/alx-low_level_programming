#include "main.h"
/**
 * main - print alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";
	while(*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}
