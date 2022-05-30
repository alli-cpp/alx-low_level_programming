#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file
 * @text_content: the content
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, bits_rot;

	if (filename == NULL)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		bits_rot = write(fd, text_content, i);
		if (bits_rot < 0 || bits_rot != i)
			return (-1);
	}
	close(fd);
	return (1);
}
