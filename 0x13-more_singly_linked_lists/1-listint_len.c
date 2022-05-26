#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of
 *elements in a linked listint_t list
 * @b: Pointer
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *b)
{
	size_t nodes = 0;

	while (b)
	{
		nodes++;
		b = b->next;
	}

	return (nodes);
}
