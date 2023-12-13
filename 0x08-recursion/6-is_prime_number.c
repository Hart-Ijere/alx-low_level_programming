#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - checks if a given numb
 * er is a prime number
 * @n: number to be checked
 *
 * Return: 1 if number is a prime, 0 otherw
 * ise
 */

/**
 * is_prime_number_hp - helper function
 * @n - parameter
 * @i - parameter
 *
 * Return: 1
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

int is_prime_number(int n)
{
return (is_prime_number_hp(n, n - 1));
}
