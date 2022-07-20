#include "main.h"

/**
 *factorial - calculate the factorial number
 * @n:the numberto calculate for purpose factorial
 * Return: nothing
 */
int factorial(int n);
{
	if (n < 0)
		return (-1);


	if (n <= 1)
		return (n * factorial(n - 1));
}
