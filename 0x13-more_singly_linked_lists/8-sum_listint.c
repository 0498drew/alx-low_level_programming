#include "lists.h"

/**
 * sum_listint - sums up all the data (n) of a listint_t linked list
 * @head: the pointer to the head node of a listint_t list
 *
 * Return: the sum of all the data of the listint_t list
 */

int sum_listint(listint_t *head)
}
	int sum = 0;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
return (sum);

}
