#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head : pointer to the list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	if (!head)
		return (0);

	prev = NULL;
	while (*head)
	{
		next = *head;
		*head = (*head)->next;
		next->next = prev;
		prev = next;
	}

	*head = prev;

	return (*head);
}
