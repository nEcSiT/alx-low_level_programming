#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint linked list
 * and returns the headnode's data(n)
 *
 * Return: the head node's data (0) or 0
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
