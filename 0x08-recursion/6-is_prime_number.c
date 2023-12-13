#include <stdio.h>
#include "main.h"

/**
 * is_prime_number_hp - checks if a given numb
 * er is a prime number
 * @n: number to be checked
 * @i: number to be computed
 *
 * Return: 0 or 1
 */

int is_prime_number_hp(int n, int i)
{
if (n <= 1)
{
return (0);
}
if (i == 1)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (is_prime_number_hp(n, i - 1));
}

/**
 * is_prime_number - checks for a prime
 * @n: number to compute
 *
 * Return: value of helper funtion
 */

int is_prime_number(int n)
{
return (is_prime_number_hp(n, n - 1));
}
