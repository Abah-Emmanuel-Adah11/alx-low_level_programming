#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end of a
 * listint_t list.
 * @head: a pointer to the first element on the list
 * @n: the data to insert in the new element
 *
 * Return: the pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = add;

	return (add);
}
