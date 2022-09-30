#include "hash_tables.h"

/**
 * hash_table_print - function prototype
 * Description: Prints a hash table
 * @ht: The hash table has table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int flag = 1;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] && flag)
		{
			putchar('{');
			flag = 0;
		}

		tmp = ht->array[i];

		while (tmp)
		{
			printf("\'%s\': \'%s\'", tmp->key, tmp->value);
			if (tmp->next)
				printf(", ");
			tmp = tmp->next;
		}

		if (!flag && i != ht->size - 1 && ht->array[i + 1])
			printf(", ");
	}

	if (!flag)
		putchar('}');
	putchar('\n');
}
