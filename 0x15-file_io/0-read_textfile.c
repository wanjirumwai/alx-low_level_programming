#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-This function will read text file
 * and print to Standard Output.
 * @filename:Pointer to the txt file being read
 * @letters:Points to the number of letters being read
 * Return: w-reads and prints out acurately
 *        0 upon failure or  when filename is NULL.
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
