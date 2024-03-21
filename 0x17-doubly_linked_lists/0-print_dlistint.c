#include "lists.h"

/**
 * print_dlistint: print dlistint
 * @h: head of list
 * Return: 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	int cpt = 0;

	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		cpt++;
		current = current->next;
	}

	return (cpt);
}
