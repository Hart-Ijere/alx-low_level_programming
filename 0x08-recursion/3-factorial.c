#include "main.h"
#include <stdio.h>

/**
* factorial - calculates the factorial of a number
* @n: number to be calculated
*
* Return: (-1) if n is less than zero
*/

int factorial(int n)
{
if (n < 0)
return (-1);

if (n == 0)
return (1);

return (n * factorial(n - 1);
}
