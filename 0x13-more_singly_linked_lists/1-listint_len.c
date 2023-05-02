#include "lists.h"

/**
 * listint_len - gives the nuber of length
 * @h: a pointer to the header
 *
 * Return: length
 */

size_t listint_len(const listint_t *h)

{
	size_t node = 0;

		while (h != 0)
	{
		node++;
		h = h->next;
	}

	return (node);
}
