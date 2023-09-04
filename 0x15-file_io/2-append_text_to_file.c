#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 *         If filename is NULL return -1
 *         If text_content is NULL, do not add anything to the file.
 *         if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd = open(filename, O_WRONLY | O_APPEND), index = 0;

	if (!filename || fd == -1)
		return (-1);

	for ( ; text_content[index] != '\0'; index++)
		;

	if (index != 0)
	{
		if (write(fd, text_content, index) == -1)
			return (-1);
		return (1);
	}

	return (1);
}
