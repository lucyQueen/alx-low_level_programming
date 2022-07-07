#include "lists.h"

/**
 * dlistint_len - Counts all the elements in a dlistint_t list.
 * @b: Pointer to the head node of a linked list.
 * Return: Number of nodes on the list.
 */
size_t dlistint_len(const dlistint_t *b)
{
	size_t i;

	if (b == NULL)
		return (0);
	for (i = 0; b != NULL; i++)
		b = b->next;
	return (i);
}
