#include "hash_tables.h"

/**
 * hash_table_delete - Function to delete hash table.
 *
 * @ht: The hash table given.
 *
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *now = NULL, *tmp = NULL;
	unsigned long int index = 0;

	if (ht == NULL)
	{
		return;
	}

	while (index < ht->size)
	{
		now = ht->array[index];

		while (now != NULL)
		{
			tmp = now;
			now = now->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
		}

		index++;
	}

	free(ht->array);
	free(ht);
}
