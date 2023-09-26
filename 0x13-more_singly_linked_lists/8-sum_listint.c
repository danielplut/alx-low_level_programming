#include "lists.h"
/**
 * sum_listint - returns the sum of all data (n) of a linked list
 * @head: first node of a linked list
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
