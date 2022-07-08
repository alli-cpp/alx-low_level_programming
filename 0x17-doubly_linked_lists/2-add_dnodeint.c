#include "lists.h"

/**
 * add_dnodeint - a function that adds a node at the beginning of the list
 * @head: the head of the list
 * @n: the data
 * Return: the adress of the added node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
