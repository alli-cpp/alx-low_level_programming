#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: the separator
 * @n: the number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list lst;
	char *cc;

	va_start(lst, n);
	for (count = 0; count < n; count++)
	{
		cc = va_arg(lst, char *);
		if (count > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		if (cc == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", cc);
		}
	}
	printf("\n");
	va_end(lst);
}
