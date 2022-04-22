#include "lists.h"

/**
  * add_node_end - Adds a new node at the end of a list
  * @head: The main linked list
  * @str: The string to add to the node
  * Return: The address of the new list otherwise NULL
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *newNode;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
			return (NULL);

		new_list->str = strdup(str);
		new_list->len = strlen(str);
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head  = new_list;
			return (*head);
		}
		else
		{
			newNode = *head;
			while (newNode->next)
				newNode = newNode->next;

			newNode->next = new_list;
			return (newNode);
		}
	}

	return (NULL);
}
