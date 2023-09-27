#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of list
 * Return: address of the node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortise, *hare;

	tortise = hare = head;
	while (tortise && hare && hare->next)
	{
		tortise = tortise->next;
		hare = hare->next->next;
		if (tortise == hare)
		{
			tortise = head;
			break;
		}
	}
	if (!tortise || !hare || !hare->next)
		return (NULL);
	while (tortise != hare)
	{
		tortise = tortise->next;
		hare = hare->next;
	}
	return (hare);
}
