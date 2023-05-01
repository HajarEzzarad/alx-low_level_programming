#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *a;

	if (head != NULL)
	{
		a = *head;
		while ((temp = a) != NULL)
		{
			a = a->next;
			free(temp);
		}
		*head = NULL;
	}
}
