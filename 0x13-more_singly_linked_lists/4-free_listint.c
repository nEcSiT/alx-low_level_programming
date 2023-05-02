#include "lists.h"

/**
 * free_listint - function prototype
 * @head: address to a node
 * Return: free
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
