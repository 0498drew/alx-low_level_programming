#include "hash_tables.h"

/**
 * hash_djb2 - function prototype
 * Description: the hash is intialized to 5381 and for each character in
 * the string, the hash is multiplied by 33 and then the character is
 * added to the harsh
 * @str: The string to be hashed
 * Return: The hash value of the string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);

}
