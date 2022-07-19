#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node to the head of the linked list
 * @head: the head of the linked list
 * @n:  a number
 *
 * Return: the new added list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		new = *head;
		new->n = n;
		new->next = NULL;
		return (new);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
