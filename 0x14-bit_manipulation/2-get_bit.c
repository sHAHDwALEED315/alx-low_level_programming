#include "main.h"

/*
 * get_bit: a function that returns the value of a bit at a given index
 * @index: is the index
 * Returns: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num = (n >> index);

	if (index > 32)
		return (-1);
	return (num & 1);
}
