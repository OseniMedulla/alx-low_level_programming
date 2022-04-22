#include "lists.h"

/**
 * free_list - free memory space of a linked list
 * @head: pointer to the first node of linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

		while (head)
		{
			tmp = head;
			head = head->next;
			free(tmp->str);
			free(tmp);
		}

	free(head);
}
