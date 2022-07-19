#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the head node
 * @head: the head node
 * Return: the head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tempNode;
	int nodeData;

	if (*head == NULL)
	{
		return (0);
	}

	tempNode = *head;
	*head = tempNode->next;
	nodeData = tempNode->n;

	free(tempNode);
	return (nodeData);

}
