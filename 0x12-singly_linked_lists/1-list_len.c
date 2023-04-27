#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - length of list_t struct
 * @h: head  ode
 * Return: number of the elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

