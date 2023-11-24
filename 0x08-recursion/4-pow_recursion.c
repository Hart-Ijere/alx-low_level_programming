#include "main.h"
#include <stdio.h>
/**
* _pow_recursion - function that returns the value* of x raised to the power of y
* @x: nuber to be computed
* @y: number to be computed
*
* Return: returns (-1) if y is lower than zero
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}
