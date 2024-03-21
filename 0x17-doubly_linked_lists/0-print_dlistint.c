#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the head of the doubly linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t cpt = 0;

	current = h;
	while (current)
	{
		cpt++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (cpt);
}
