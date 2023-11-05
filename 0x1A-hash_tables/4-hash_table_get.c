#include "hash_tables.h"

/**
 * hash_table_get - function to retrieve
 * the value associated with a key.
 *
 * @ht: The hash table.
 * @key: The key.
 * Return: The value for the given key
 *
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *now = NULL;
	int index = 0;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	now = ht->array[index];
	while (now != NULL)
	{
		if (strcmp(now->key, key) == 0)
		{
			return (now->value);
		}
		now = now->next;
	}

	return (NULL);
}
