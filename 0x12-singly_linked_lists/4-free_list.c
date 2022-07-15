
#include "lists.h"
#include "stdlib.h"
/**
 * free_list - a function free list_t
 * @head: the head of linked list
 * Return:void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}

