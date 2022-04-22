#include "lists.h"

/**
 * add_node - function that add node to the top of a list
 * @head: pointer to a list
 * @str: string to the new node
 * Return: to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (!head)
		return (0);

	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (0);

	newNode->str = strdup(str);

	newNode->len = strlen(str);

	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
