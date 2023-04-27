#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees a list
 * @head: head var
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head != NULL)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
