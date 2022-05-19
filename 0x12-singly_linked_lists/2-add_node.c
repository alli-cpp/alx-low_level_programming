#include "lists.h"
#include <string.h>

/**
 * add_node - a function that adds a node
 * @head: the beginning of the node
 * @str: the string stored in the list
 * Return: a pointer to the the beginning of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int count = 0;
	list_t *nod;

	while (str[count])
	{
		count++;
	}
	nod = malloc(sizeof(list_t));
	if (!nod)
		return (NULL);
	nod->str = strdup(str);
	nod->len = count;
	nod->next = *head;
	*head = nod;
	return (*head);
}
