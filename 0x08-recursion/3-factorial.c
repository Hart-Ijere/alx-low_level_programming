#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factoria
 * l of a given number
 * @n: the given number
 *
 * Return: return (-1) if n is lower than zero
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
