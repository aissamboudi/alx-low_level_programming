#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - prints the alphabet x10.
 * Description: This function will print alphabet 10 times
 * Return: Void
 */

void print_alphabet_x10(void)
{
int cpt = 0;

while (cpt < 10)
{
print_alphabet();
cpt++;
}
}
