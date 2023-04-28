#include "lists.h"

/**
 * list_len - List length
 * @h: The linked list_t list.
 *
 * Return: The number elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t items = 0;

	while (h)
	{
		items++;
		h = h->next;
	}

	return (items);
}
