#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/*
 * read_textfile: a function that reads a
 * text file and prints it to the POSIX standard output.
 * @filename: the file pointer.
 * @letters: the number of letters shoud be read and print.
 * Return: the number of letters that print (else it returns 0).
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t lenr, lenw;
	char *buffer;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(f);
		return (0);
	}
	lenr = read(f, buffer, letters);
	close(f);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
