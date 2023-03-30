#include "main.h"

/**
 * reverse_array - reverses array
 * @a: int pointer
 * @n: integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int cpt, aux;

	for (cpt = 0; cpt < n / 2; cpt++)
	{
		aux = *(a + cpt);
		*(a + cpt) = *(a + n - cpt - 1);
		*(a + n - cpt - 1) = aux;
	}
}
