#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a node at a given index
 * @idx: the index
 * @n: the data
 * @head: the head node
 * Return: the address of the new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nvgt = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (idx > 1)
	{
		if (nvgt == NULL)
			return (NULL);
		nvgt = nvgt->next;
		idx--;
	}
	new->next = nvgt->next;
	nvgt->next = new;
	return (new);
}
