#include "lists.h"

/**
 * sum_listint - sums all the data in a list
 * @head: first node in the list
 * Return:  sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
