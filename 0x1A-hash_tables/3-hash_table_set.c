#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an item on a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key of the added item to the hash table.
 * @value: The pair value of the key.
 * Return: Upon failure - 0.
 * othererwise - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newest;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	newest = malloc(sizeof(hash_node_t));
	if (newest == NULL)
	{
		free(value_copy);
		return (0);
	}

	newest->key = strdup(key);
	if (newest->key == NULL)
	{
		free(newest);
		return (0);
	}
	newest->value = value_copy;
	newest->next = ht->array[index];
	ht->array[index] = newest;

	return (1);
}
