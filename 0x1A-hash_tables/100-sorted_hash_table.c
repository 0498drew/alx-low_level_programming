#include "hash_tables.h"

/**
 * shash_table_create - function prototype
 * Description: Creates a hash table
 * @size: The size of the array
 * Return: A pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table = malloc(sizeof(shash_table_t));
	unsigned long int i;

	if (hash_table == NULL)
		return (NULL);

	hash_table->array = malloc(sizeof(shash_node_t *) * size);

	if (hash_table->array == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->shead = NULL;
	hash_table->stail = NULL;

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}

/**
 * shash_table_set - function prototype
 * Description: Adds an element to the hash table
 * @ht:The hash table to add or update the key/value to
 * @key: The key to be added to the hash table
 * @value: The value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	shash_node_t *node, *tmp;
	shash_node_t *current;

	if (ht  == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current != NULL && strcmp(current->key, key) == 0)
	{
		current->value = strdup(value);
		return (1);
	}
	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	if (ht->shead == NULL)
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		node->sprev = tmp;
		node->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = node;
		else
			tmp->snext->sprev = node;

		tmp->snext = node;
	}
	return (1);
}

/**
 * shash_table_get - function prototype
 * Description: Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key to look for
 * Return: The value associated with the element, or NULL if
 * key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long index;
	shash_node_t *tmp;

	if (ht  == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);

		tmp = tmp->snext;
	}

	return (NULL);
}

/**
 * shash_table_print - function prototype
 * Description: Prints a hash table
 * @ht: The hash table has table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	temp = ht->shead;
	printf("{");

	while (temp != NULL)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;

		if (temp != NULL)
			printf(", ");
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - function prototype
 * Description: Prints a hash table in reverse
 * @ht: The hash table has table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");

	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;

		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - function prototype
 * Description: Deletes a hash table
 * @ht: The hash table to delete
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;

	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
