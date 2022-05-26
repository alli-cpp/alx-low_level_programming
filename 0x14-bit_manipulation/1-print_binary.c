#include "main.h"

/**
 * print_binary - a function that prints the binary representation
 * @n: the number to be printed
 */
void print_binary(unsigned long int n)
{
	int cc = 0;
	unsigned int num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (num = 1 << 31; num > 0; num = num >> 1)
	{
		if (n & num)
		{
			_putchar('1');
			cc++;
		}
		else if ((!(n & num)) && cc)
			_putchar('0');
	}
}
