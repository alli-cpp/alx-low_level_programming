#include "lists.h"
#include <string.h>
/**
 * add_node_end - a function that adds a node at the end of a list
 * @head: the head node
 * @str: the value of str
 * Return: a  pointer at that was newly added
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int count = 0;
	list_t *nod, *temp;

	if (str == NULL)
		return (NULL);
	while (str[count])
		count++;
	nod = malloc(sizeof(list_t));
	temp = malloc(sizeof(list_t));
	if (!(nod && temp))
		return (NULL);
	nod->str = strdup(str);
	nod->len = count;
	nod->next = NULL;
	if (*head == NULL)
	{
		*head = nod;
		return (nod);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = nod;
	return (nod);
}
