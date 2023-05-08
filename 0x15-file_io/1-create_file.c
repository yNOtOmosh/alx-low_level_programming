#include "main.h"
/**
 * create_file - creates a file
 * @filename:  is the name of the file to create and
 * text_content is a NULL terminated string to write to the file
 * @text_content: pointer to a string to write to the file
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be written, write “fails”
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}