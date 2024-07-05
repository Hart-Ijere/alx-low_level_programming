#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_delete - Delete a hash table
  * @ht: The Hash table to free
  *
  * Return: Nothing!
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n = 0;
	hash_node_t *node = NULL, *temp = NULL;

	if (ht && ht->size && ht->array)
	{
		for (; n < ht->size; ++n)
		{
			node = ht->array[n];

			if (node)
			{
				if (node->next)
				{
					node = node->next;
					while (node)
					{
						temp = node;
						node = node->next;
						free(temp->key);
						free(temp->value);
						free(temp);
					}
				}

				node = ht->array[n];
				if (node->key && node->value)
				{
					free(node->key);
					free(node->value);
				}
			}

			free(node);
		}

		free(ht->array);
		free(ht);
	}
}
