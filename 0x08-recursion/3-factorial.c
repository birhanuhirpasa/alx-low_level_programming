#include "main.h"

/**
 * factorial - calculate the factorial number
 * @n:the number to calculate for factorial
 * Return: nothing
 */
int factorial(int n);
{
	if (n < 0)
		return (-1);


	if (n <= 1)
		return (1);

		return (n * factorial(n - 1));
}
