#include "main.h"
/**
 * main - print alphabets
 *
 * Return: Always 0
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