#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - function that computes
 * the natural square root of a number
 * @n: parameter value to be computed
 *
 * Return: (-1) if n does not have a natura
 * l square root
 */

/**
 * res - function that helps _sqrt_recursio
 * n
 * @i: parameter
 * @b: parameter
 * @j: parameter
 * Return: ctr
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return res(n, 0, n);
}

int res(int i, int b, int j)
int m;
if (b <= j)
{
m = b + (j - b) / 2;
if ((m + m == n) || ((m * m < n) && ((m + 1) * (m + 1) > n)))
{
return (m);
}
else if (m * m < n)
{
return res(n, m + 1, j);
}
else
{
return res(n, b, m - 1);
}
}
