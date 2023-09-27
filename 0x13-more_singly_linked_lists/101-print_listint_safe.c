#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - counts the number of nodes
 * @head: pointer  to the head of the linked list
 * Return: if the list is looped 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tortise = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tortise == hare)
		{
			tortise = head;
			while (tortise != hare)
			{
				nodes++;
				tortise = tortise->next;
				hare = hare->next;
			}
			tortise = tortise->next;
			while (tortise != hare)
			{
				nodes++;
				tortise = tortise->next;
			}
			return (nodes);
		}
		tortise = tortise->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
