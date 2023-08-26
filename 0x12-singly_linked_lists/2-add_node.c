#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: double pointer to the list
 *
 * @str: new string to add
 *
 * Return: adds a new node at the beginning of a list_t list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
