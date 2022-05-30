#include "main.h"

/**
 * read_textfile - a function that reads and prints to the standard output
 * @filename: a pointer to the name of the file
 * @letters: the number of chars
 * Return: the actual number of letters it can read or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, bits_rot;
	int bits_red;

	if (filename == NULL)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	bits_red = read(fd, buf, letters);
	if (bits_red < 0)
	{
		free(buf);
		return (0);
	}
	buf[bits_red] = '\0';
	close(fd);
	bits_rot = write(STDOUT_FILENO, buf, bits_red);
	if (bits_rot < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (bits_rot);
}
