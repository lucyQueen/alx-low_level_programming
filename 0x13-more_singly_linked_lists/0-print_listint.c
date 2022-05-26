#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @a: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *a)
{
	size_t nodes = 0;

	while (a)
	{
		nodes++;
		printf("%d\n", a->n);
		a = a->next;
	}

	return (nodes);
}
