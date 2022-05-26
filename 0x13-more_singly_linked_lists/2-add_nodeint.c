#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 *               of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @a: integer
 *
 * Return: return Null
 */
listint_t *add_nodeint(listint_t **head, const int a)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = a;
	new->next = *head;

	*head = new;

	return (new);
}
