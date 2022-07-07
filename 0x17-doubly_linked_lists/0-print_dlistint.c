#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @b: Pointer to the head node of a linked list.
 * Return: Number of nodes on the list.
 */
size_t print_dlistint(const dlistint_t *b)
{
	size_t i;

	if (b == NULL)
		return (0);
	for (i = 0; b != NULL; i++)
	{
		printf("%d\n", b->n);
		b = b->next;

	}
	return (i);
}
