#include "lists.h"

/**
  * insert_nodeint_at_index - inserts new node at given position
  * @head: first node in the list
  * @idx: index of node to insert
  * @n: value of new node
  * Return: the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new;
	unsigned int count = 1;

	if (head)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);

		node->n = n;
		if (idx > 0)
		{
			new = *head;
			while (new)
			{
				if (count == idx)
				{
					node->next = new->next;
					new->next = node;
					return (node);
				}
				new = new->next;
				count++;
			}
			if (idx > count)
				return (NULL);
		}
		else
		{
			node->next = *head;
			*head = node;
		}
		return (node);
	}
	return (NULL);
}
