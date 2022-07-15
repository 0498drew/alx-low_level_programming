#include "lists.h"

/**
 * list_len -function that return numbers of elements in a
 * linked  list
 * @h: header pointer
 * Return: number of lits's elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}


