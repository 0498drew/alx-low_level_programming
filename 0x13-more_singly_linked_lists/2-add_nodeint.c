#include "lists.h"

/**
 * add_nodeint - This function add a new node at the beginning of linked list
 * @head: The pointer that points to pointer that points to the head
 * @n: The constant integer for data part of the node
 * Return: The address of the new node or NULL if faile
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);

}
