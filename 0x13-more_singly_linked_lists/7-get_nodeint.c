#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns a pointer to the nth node
 * @index: the nth index
 * @head: the head
 * Return: a pointer to the nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nvgt;

	nvgt = head;

	while (index > 0)
	{
		nvgt = nvgt->next;
		if (nvgt == NULL)
			return (NULL);
		index--;
	}
	return (nvgt);
}
