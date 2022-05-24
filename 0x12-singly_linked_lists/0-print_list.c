#include "lists.h"
/**
 * print_list - function that adds a new node at the
 *beginning of a list_t list.
 * @b: linked list.
 * Return: no of elements in the list.
 */

size_t print_list(const list_t *b)
{
	size_t no_len;

	no_len = 0;
	while (b != NULL)
	{
		if (b->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", b->len, b->str);
		b = b->next;
		no_len++;
	}
	return (no_len);
}
