#include "main.h"
/**
 * print_sign - a function prints the sign of a number
 * @n: number input
 * Return: 1 or 0 and print the sign
 */
int print_sign(int n)
{
if (n == 0)
{
_putchar ('0');
return (0);
}
else if (n > 0)
{
_putchar ('+');
return (1);
}
else
{
_putchar ('-');
return (-1);
}
}
