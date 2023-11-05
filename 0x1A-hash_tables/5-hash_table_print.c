#include "hash_tables.h"

/**
 * hash_table_print - Function that prints
 * a hash table.
 *
 * @ht: The hash table given.
 *
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *now = NULL;
	unsigned long int index = 0;
	int key_value = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (index < ht->size)
	{
		now = ht->array[index];
		while (now != NULL)
		{
			key_value++;
			printf("'%s': '%s'", now->key, now->value);
			if (now->next != NULL)
			{
				printf(", ");
			}
			now = now->next;
		}
		if (key_value > 0 && ht->array[index + 1] != NULL)
		{
			printf(", ");
		}
		index++;
	}
	printf("}\n");
}
