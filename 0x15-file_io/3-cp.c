#include "main.h"
#include <stdlib.h>

/**
 * __exit - function exit program with appropriate
 * status and outputto POSIX standard error
 *
 * @s: pointer to filename
 * @n: exit status
 * @fd: file descriptor
 *
 * Return: 0 on success
 */

int __exit(int n, char *s, int fd)
{
	switch (n)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(n);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
			exit(n);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(n);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(n);
		default:
			return (0);
	}
}

/**
 * main - program copies the content of a file to another file.
 * @argc: is count of program arguments
 * @argv: is a pointer to string argument
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int fd_1, fd_2, n_read, n_write;

	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	fd_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_2 == -1)
		__exit(99, argv[2], 0);

	fd_1 = open(argv[1], O_RDONLY);

	if (fd_1 == -1)
		__exit(98, argv[1], 0);
	while ((n_read = read(fd_1, buffer, 1024)) != 0)
	{
		if (n_read == -1)
			__exit(98, argv[1], 0);

		n_write = write(fd_2, buffer, n_read);

		if (n_write == -1)
			__exit(99, argv[2], 0);
	}

	close(fd_2) == -1 ? (__exit(100, NULL, fd_2)) : close(fd_2);
	close(fd_1) == -1 ? (__exit(100, NULL, fd_1)) : close(fd_1);
	return (0);
}
