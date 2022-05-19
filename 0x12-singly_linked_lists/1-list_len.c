#include "lists.h"

/**
 * list_len - a function that returns the lenght of a list
 * @h: a pointer to the list
 * Return: the lenth of the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
