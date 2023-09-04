#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * test_in_file - tests argv[1] file
 * @val: value of the file
 * @filename: name of the file
 *
 * Return: nothing
 */
void test_in_file(ssize_t val, char *filename)
{
	if (val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			filename);
		exit(98);
	}
}

/**
 * test_out_file - tests argv[2] file
 * @val: value of the file
 * @filename: name of the file
 *
 * Return: nothing
 */
void test_out_file(ssize_t val, char *filename)
{
	if (val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * test_file_descriptor - tests fd of file
 * @fd_val: value of fd
 *
 * Return: nothing
 */
void test_file_descriptor(ssize_t fd_val)
{
	if (close(fd_val) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %li\n", fd_val);
		exit(100);
	}
}

/**
 * main - main function of the file
 * @argc: number of command line arguments
 * @argv: string values of command line arguments
 *
 * Return: 1 on success.
 */
int main(int argc, char **argv)
{
	ssize_t in_fd = open(argv[1], O_RDONLY), bytes_read, bytes_written;
	ssize_t out_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	test_in_file(in_fd, argv[1]);
	test_out_file(out_fd, argv[2]);

	do {
		bytes_read = read(in_fd, buf, 1024);
		bytes_written = write(out_fd, buf, bytes_read);

		test_in_file(bytes_read, argv[1]);
		test_out_file(bytes_written, argv[2]);
	} while (bytes_read);

	test_file_descriptor(in_fd);
	test_file_descriptor(out_fd);

	return (0);
}
