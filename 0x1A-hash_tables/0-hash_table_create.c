#include "hash_tables.h"

/**
 * hash_tables_create - function prototype
 * Description: create a hash table
 * @size: the size of the array
 * Return: the pointer of the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(hash_node_t *));

	if (hash_table->array == NULL)
		return (NULL);

	return (hash_table);

}
