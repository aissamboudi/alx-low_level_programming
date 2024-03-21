#include "lists.h"

/**
 * print_dlistint: print dlistint
 * @h: head of list
 * Return: 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	int cpt = 0;

	current = h;
	while (current)
	{
		current = current->prev;
		printf("%d", current->n);
		cpt++;
	}

	return (cpt);
}
