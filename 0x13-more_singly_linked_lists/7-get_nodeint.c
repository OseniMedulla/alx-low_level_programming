#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the list
 * @index: node to return
 * Return: pointer to the node else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (!head)
		return (0);

	i = 0;
	temp = head;
	while (i < index)
	{
		if (!temp)
			return (0);
		temp = temp->next;
		i++;
	}

	return (temp);
}
