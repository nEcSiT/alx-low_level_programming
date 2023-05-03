#include "lists.h"

/**
 * free_listint2 - frees and node
 * @head: node to the head
 * Return: frees
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
