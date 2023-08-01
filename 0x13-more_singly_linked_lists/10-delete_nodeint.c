#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at the specified index of a
 * listint_t linked list.
 * @head: pointer to a pointer to the head of the linked list
 * @index: index of the node to delete (starting at 0)
 *
 * Return: 1 if the node was deleted successfully, -1 if an error occurred.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}

	prev = NULL;
	current = *head;
	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}

	prev->next = current->next;
	free(current);

	return (1);
}
