#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node
 * of a dlistint_t linked list.
 *
 * @head: A pointer to head of the list
 * @index: index of the node to search for, starting from 0
 *
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmpe;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmpe = head;
	while (tmpe)
	{
	if (index == size)
	return (tmpe);
	size++;
	tmpe = tmpe->next;
	}
	return (NULL);
}
