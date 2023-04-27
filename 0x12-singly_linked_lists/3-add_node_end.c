#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adds node at end
 * @head: head
 * @str: string to add
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new, *n;

	while (str[i])
		i++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (strdup(str) == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		n = *head;
		while (n->next != NULL)
			n = n->next;
		n->next = new;
		return (new);
	}
}
