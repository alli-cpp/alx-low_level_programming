#include "variadic_functions.h"

/**
 * sum_them_all - a functio that sums all the arguments
 * @n: the number of arguments
 * Return: their sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list lst;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(lst, unsigned int);
	}
	va_end(lst);
	return (sum);
}
