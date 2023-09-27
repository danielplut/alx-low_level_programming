#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of list
 * Return: address of the node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);
	
	tortise = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tortise == hare)
		{
			tortise = head;
			while (tortise != hare)
			{
				tortise = tortise->next;
				hare = hare->next;
			}
			return (tortise);
		}
		tortise = tortise->next;
		hare = (hare->next)->next;
	}
}
