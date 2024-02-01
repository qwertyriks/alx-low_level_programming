#include "hash_tables.h"

/**
 * key_index - reps key index of the current item
 * @key: This is to get the index ofthe key
 *
 * @size: Reps the size of the array item of the hash table.
 *
 * Return: The index of the key.
 *
 * Description: Uses the djb2 algorithm too
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
