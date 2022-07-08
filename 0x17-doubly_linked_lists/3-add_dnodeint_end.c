#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a node at the end of the list
 * @head: the head pointer
 * @n: the data
 * Return: a pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	return (new);
}
