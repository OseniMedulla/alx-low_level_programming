#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to the first element in the list
 * Return: the data inside the deleted elements or
 * 0 if list is empty
 */

int pop_listint(listint_t **head);
{
	int data = 0;
	listint_t *temp;

	if (!head || !(*head))
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
