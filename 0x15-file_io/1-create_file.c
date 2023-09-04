#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to be created
 * @text_content: content of @filename
 *
 * Return: 1 on success, -1 on failure
 *        d file must have those permissions: rw-------
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600), i = 0;
	size_t content_length = 0;

	if (fd == -1)
		return (-1);

	if (!filename)
		return (-1);

	if (text_content)
	{
		for ( ; text_content[i] != '\0'; i++, content_length++)
			;

		if (write(fd, text_content, content_length) == -1)
			return (-1);

		return (1);
	}

	return (1);
}
