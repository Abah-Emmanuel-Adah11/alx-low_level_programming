#include <stdlib.h>
#include "list.h"
/**
 * free_list - A function that frees a linked list list_t.
 * @head: list_t list to be freed
 *
 * Return: Number of elements in h
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
