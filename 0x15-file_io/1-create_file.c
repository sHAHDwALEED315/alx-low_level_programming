#include "main.h"

/*
 * create_file:a function that creates a file.
 *
 * Returns: 1 on success, -1 on failure or
 * filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	int n;
	int con_w;

	if (!filename)
		return (-1);
	f = open(filename, O_CREAT, O_WRONLY, O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (!text_content)
		text_content = " ";
	for (n = 0; text_content(n); n++)
		;
	con_w = write(f, text_content, n);
	if (con_w == -1)
		return (-1);
	close(f);
	return (1);
}
