#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t readfile;
	ssize_t writefile;
	ssize_t to;

	readfile = open(filename, O_RDONLY);
	if (readfile == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	to = read(readfile, buf, letters);
	writefile = write(STDOUT_FILENO, buf, to);

	free(buf);
	close(readfile);
	return (writefile);
}
