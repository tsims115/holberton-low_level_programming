#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add element to
 * @key: string for key gto hold
 * @value: value associated with the key
 * Return: 1 if success or -1 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	hash_node_t *tmp = ht->array[key_index((const unsigned char *)key, ht->size)];

	if (node == NULL)
	{
		free(node);
		return (0);
	}
	if (strcmp("", key) == 0)
	{
		free(node);
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (tmp == NULL)
	{
		ht->array[key_index((const unsigned char *)key, ht->size)] = node;
		return (1);
	}
	else
	{
		ht->array[0] = node;
		return (1);
	}
	return (0);
}
