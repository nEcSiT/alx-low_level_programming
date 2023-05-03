#include "lists.h"
/**
 * sum_listint - sum of all data in the list
 * @head:pointer
 * Return:sum
 */




int sum_listint(listint_t *head)
{
	listint_t *cpt;
	int sum;

	sum = 0;
	add = head;

	while (add != NULL)
	{
		sum += add->n;
	add = add->next;
	}
	return (sum);
}
