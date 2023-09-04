#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX
 *                  standard output.
 * @filename: name of the file to be read
 * @letters: number of letters function should read and print
 *
 * Return: actual number of letters it could read and print
 *         if the file can not be opened or read, return 0
 *         if filename is NULL return 0
 *         if write fails or does not write the expected amount of
 *         bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(sizeof(char) * letters);
	int fd;
	ssize_t bytes_read, bytes_written;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1 || !buf)
		return (0);

	bytes_read = read(fd, buf, letters);

	close(fd);

	if (bytes_read == -1)
		return (0);

	buf[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	free(buf);

	return (bytes_written);
}
