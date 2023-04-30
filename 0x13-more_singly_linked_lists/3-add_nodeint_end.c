#include "lists.h"

/**
 * add_nodeint_end - add new node at the end
 * of a linked list
 * @head: head of the list
 * @n: nyumber of the elements;
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *help;

(void)help;

newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
	return (NULL);
newNode->n = n;
newNode->next = NULL;
	help = *head;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (help->next != NULL)
		{
			help = help->next;
		}
		help->next = newNode;
	}

	return (*head);
}

