#include "function_pointers.h"

/**
 * array_iterator - a function that iterates through an array
 * @array: the array in question
 * @size: the size of the array
 * @action: a pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
