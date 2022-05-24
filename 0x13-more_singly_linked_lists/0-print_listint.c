#include "lists.h"

/**
 * print_listint - a function that prints the elements of a list
 * @h: points to the head
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;


	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
