#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and prints it to the
 * posix standard output.
 *
 * @filename: the textfile to be read
 * @letters: number of letter to be read
 *
 * Return: w- the actual number of bytes read and printed
 * and 0 if the function fails or filename is null.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
