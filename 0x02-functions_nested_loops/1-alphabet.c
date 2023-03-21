#include "main.h"

/**
 * print_alphabet - prints the alphabet.
 */

void print_alphabet(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";

        while (*str)
        {
		_putchar(*str);
		str++;
        }

        _putchar('\n');
}
