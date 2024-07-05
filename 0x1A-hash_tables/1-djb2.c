#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_djb2 - Hash function with the djb2 algorithm.
  * @str: Value to which the function
  *
  * Return: A number representing the given string
  */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int cnt;

	hash = 5381;
	while ((cnt = *str++))
	{
		hash = ((hash << 5) + hash) + cnt; /* hash * 33 + cnt */
	}
	return (hash);
}
