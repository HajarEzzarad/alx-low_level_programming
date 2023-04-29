#include "lists.h"

/**
 * add_nodeint - add a new node at the beggining
 * of a linked list
 *@head: head of list
 *@n: number opf elements
 */
listint_t *add_nodeint(listint_t **head,const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = next;
	*head = newnode;
	 return (*head);
}
