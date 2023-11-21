#include <stdio.h>

/**
* factorial - calculates the factorial of a numb* er
* @n: number to be evaluated
*
* Return: (-1) if n is less than zero
*/

int factorial(int n)
{
  if (n < 0)
    return (-1);

  if (n == 0)
    return (1);

  return n * factorial(n - 1);
}

    

