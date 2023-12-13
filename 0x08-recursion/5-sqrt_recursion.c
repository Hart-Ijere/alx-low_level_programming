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
 * @n: parameter
 * @start: parameter
 * @end: parameter
 * Return: -1
 */

int _sqrt_recursion(int n)
{
if (n < 0) {
return -1;
}

return _sqrt_helper(n, 0, n);
}

int _sqrt_helper(int n, int start, int end){
if (start <= end) {
int mid = start + (end - start) / 2;

if ((mid * mid == n) || ((mid * mid < n) &&((mid + 1) * (mid + 1) > n))) {
return mid;
}
else if (mid * mid < n)
{
return _sqrt_helper(n, mid + 1, end);
}
else
{
return _sqrt_helper(n, start, mid - 1);
}
}
return -1;
}

