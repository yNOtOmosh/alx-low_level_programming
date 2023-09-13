#include "hash_tables.h"

/**
 * hash_djb2 - Hashes a string using the djb2 algorithm.
 * @str: the string to be hashed
 *
 * Return: the hash value as an unsigned long int
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;

	while (*str)
	{
		hash = ((hash << 5) + hash) + *str;
		str++;
	}

	return hash;
}
