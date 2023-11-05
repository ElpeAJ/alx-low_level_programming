#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to hash table.
 *
 * @ht: The hash table.
 * @key: The key to.
 * @value: The value for the key.
 *
 * Return: 1 when the operation succeeds
 * otherwise 0.
 *
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *now = NULL;
	unsigned long int index = 0;
	int return_value = 1;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		(return_value = 0);
	}
	else
	{
		index = key_index((const unsigned char *)key, ht->size);
		now = ht->array[index];
		while (now != NULL)
		{
			if (strcmp(now->key, key) == 0)
			{
				free(now->value);
				now->value = strdup(value);
				break;
			}
			now = now->next;
		}
		if (now == NULL)
		{
			node = malloc(sizeof(hash_node_t));
			if (node == NULL)
			{
				(return_value = 1);
			}
			else
			{
				node->key = strdup(key);
				node->value = strdup(value);
				node->next = ht->array[index];
				ht->array[index] = node;
			}
		}
	}

	return (return_value);
}
