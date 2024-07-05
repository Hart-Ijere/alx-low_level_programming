#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_print - Print a hash table
  * @ht: Hash table to prints
  *
  * Return: Nothing!
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int n = 0;
	short n2 = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (; n < ht->size; ++n)
	{
		node = ht->array[n];

		while (node)
		{
			if (n2 == 1)
				printf(", ");

			n2 = 1;
			printf("'%s': '%s'", (char *) node->key,
								(char *) node->value);

			node = node->next;
		}
	}

	printf("}\n");
}
