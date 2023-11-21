#include <stdio.h>

/**
 * 3-factorial - funcrion that prints the factori   al of a given number
 * @n: function parameter
 *
 * Return: -1 if n is lower than 0
 */

int factorial(int n)
{
if (n < 0)
{
return(-1);
}
if (n == 0)
{
return(1);
}
return n * factorial(n - 1);

}

