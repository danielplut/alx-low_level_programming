#include "lists.h"
/**
 * add_nodeint_end - adds node at the end of a linked list
 * @head: pointer to the first element
 * @n: data to insert in the new node
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tmp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = newnode;
	return (newnode);
}
