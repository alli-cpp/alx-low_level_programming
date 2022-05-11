#include "function_pointers.h"
/**
 * int_index - a function that searches through an array
 * @array: the array to be searched through
 * @size: the size of the array
 * @cmp: the condtion of comparision
 * Return: the index of first sighting or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
