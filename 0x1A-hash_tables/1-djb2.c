#include "hash_tables.h"

/**
 * hash_djb2 - The  Hash function implements the djb2 algorithm as.
 * @str: Reps the string to the hash.
 *
 * Return: Is the calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
