#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * is_prime_number - checks if a given numb
 * er is a prime number
 * @n: number to be checked
 *
 * Return: 1 if number is a prime, 0 otherw
 * ise
 */

int _is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
if (n == 2)
{
return (1);
}
for (int i = 2; i <= sqrt(n); i++)
{
if (n % i == 0)
{
return (0);
}
}

return (1);
}
