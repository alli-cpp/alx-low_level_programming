#include "lists.h"
#include <stdio.h>
/**
 * print_list - a fucntion that prints the elements of a list
 * @h: a pointer to the list
 * Return: the number of elements
 */
size_t print_list(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nill)\n");
		elem++;
		h = h->next;
	}
	return (elem);
}
