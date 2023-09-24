#include "lists.h"
/**
 * list_len - return the number of elements in a linked list
 * @h: head of node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
