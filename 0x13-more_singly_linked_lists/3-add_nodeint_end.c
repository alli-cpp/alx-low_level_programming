#include "lists.h"

/**
 * add_nodeint_end - a function that adds a node at the end
 * @head: a pointer to the head pointer
 * @n: the data
 * Return: a pointer to the newly created node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *nvgt;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	nvgt = *head;

	while (nvgt->next != NULL)
	{
		nvgt = nvgt->next;
	}
	nvgt->next = new;
	return (new);
}
