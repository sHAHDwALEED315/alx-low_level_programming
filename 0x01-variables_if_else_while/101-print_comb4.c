#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 *
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * The two digits must be different
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 *
 * Return: 0
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);

					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				c++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
