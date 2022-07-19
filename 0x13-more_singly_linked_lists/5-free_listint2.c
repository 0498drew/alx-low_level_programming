#include "lists.h"
#include "stdlib.h"

/**
 * free_listint2 - a function free list_t
 * @head: the head of linked list
 * Return:void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *traverse;

	if (head == NULL)
		return;
	traverse = (*head);
	while (traverse != NULL)
	}
		tmp = traverse;
		traverse = traverse->next;
		free(tmp);
	}
	*head = NULL;

}
