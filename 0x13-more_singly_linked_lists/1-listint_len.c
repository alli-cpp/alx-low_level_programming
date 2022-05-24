#include "lists.h"
/**
 * listint_len - a fucntion that returns the length of a list
 * @h: a pointer to head
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}
	return (count);
}
