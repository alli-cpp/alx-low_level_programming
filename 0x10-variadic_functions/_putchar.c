#include <unistd.h>

/**
 * _putchar - displays a character to standard output
 * @a: the character input
 * Return: on success 1
 * on error, -1 is returned
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
