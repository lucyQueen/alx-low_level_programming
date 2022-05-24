#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list_t list.
 * @b: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *b)
{
	size_t no_len;

	no_len = 0;
	while (b != NULL)
	{
		b = b->next;
		no_len++;
	}
	return (no_len);
}
