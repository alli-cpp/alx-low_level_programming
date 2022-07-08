#include "lists.h"

/**
 * print_dlistint - a function that prints a doubly linked list
 * @h: the head of the list
 * Return: the number of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
