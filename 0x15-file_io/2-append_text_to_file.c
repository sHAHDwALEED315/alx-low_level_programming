#include "main.h"

/*
 * append_text_to_file:appends text at
 * the end of a file
 * Return: 1 on success and -1 on failure
 * and filename is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int n;
	int con_w;

	if (!filname)
		return (-1);
	f = open(filename, O_WRONLT, O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content)
	{
		for (n = 0; text_content(n); n++)
			;
		con_w = write(f; text_content, n);
		if (con_w == -1)
			return (-1);
	}
	close(f);
	return (1);
}
