#include "main.h"

/**
 * factorial : a function that returns the factorial of a given number
 * @n : The number we want to calculate it's factorial
 */

int factorial(int n)
{
	if (n == 0 || 1)
	{
		return 1;
	else
		return ( n + factorial(n-1))
	}
}
