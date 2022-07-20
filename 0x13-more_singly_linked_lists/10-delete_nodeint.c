#include "lists.h"

/**
 *  * delete_nodeint_at_index - This function deletes the node at a given inde
 * @head: The head of the node
 * @index: Is the index of the node that should be deleted
 * Return: 1 if if succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *curr;

	prev = *head;
	curr = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
	}
	else
	{
		while (index != 0)
		{
			prev = curr;
			curr = curr->next;
			index--;
		}
		prev->next = curr->next;
		free(curr);
		curr = NULL;
	}

	return (1);
}
