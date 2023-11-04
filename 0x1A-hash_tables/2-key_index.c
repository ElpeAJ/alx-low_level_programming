#include "hash_tables.h"

/**
 * key_index - Function to determine the index 
 * for the given key based on its hash value.
 *
 * @key: Is the key 
 * @size: Is the size of the array of the hash table
 *
 * Return: The index at which key/value pair
 * should be stored.
 *
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, hash_value = 0;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
