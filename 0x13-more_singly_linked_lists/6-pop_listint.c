#include "lists.h"
/**
 * pop_listint - deletes the head node of linked list
 * @head: pointer to the first element in the linked list
 * Return: data inside the element deleted or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
	{
		return (0);
	}
	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (num);
}
