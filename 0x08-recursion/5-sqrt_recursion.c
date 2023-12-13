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
 * @begin: parameter
 * @start: parameter
 * @end: parameter
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

int res(int begin, int start, int end)
int middle;
if (start  <= end)
{
middle = start + (end - start) / 2;
if ((middle + middle == n) || ((middle * middle < n) && ((middle + 1) * (middle + 1) > n)))
{
return (middle);
}
else if (middle * middle < begin)
{
return res(begin, middle + 1, end);
}
else
{
return res(begin, start, middle - 1);
}
}
