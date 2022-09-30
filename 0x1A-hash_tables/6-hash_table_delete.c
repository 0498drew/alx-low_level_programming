#include "hash_tables.h"

/**
 * hash_table_delete - function prototype
 * Description: Deletes a hash table
 * @ht: The hash table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	hash_node_t *del;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		while (tmp)
		{
			del = tmp;
			tmp = tmp->next;
			free(del->key);
			free(del->value);
			free(del);
		}
	}

	free(ht->array);
	free(ht);
}
