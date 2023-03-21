#include "main.h"
/**
 * main - print alphabets
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";

        while (*str)
        {
                _putchar(*str);
                str++;
        }
        _putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
