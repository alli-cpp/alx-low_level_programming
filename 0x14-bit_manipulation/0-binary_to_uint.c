#include "main.h"

/**
 * binary_to_uint - a function that converts a binary to integer
 * @b: a pointer to the string of chars holding the binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, count0 = 0, count1;
	unsigned int value = 0, temp = 1;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	len--;
	while (len >= 0)
	{
		if (b[len] == '0' || b[len] == '1')
		{
			count1 = count0;
			if (b[len] == '1')
			{
				while (count1 > 0)
				{
					temp *= 2;
					count1--;
				}
				value += temp;
			}
			count0++;
			temp = 1;
			len--;
		}
		else
			return (0);
	}
	return (value);
}
