#include "main.h"

/**
* print_triangle - prints a triangle
* @size: size of the triangle
* Return: triangle of '#'s
*/

void print_triangle(int size)
{
int ab, ac, ad;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (ac = 0; ac <= (size - 1); ac++)
{
for (ab = 0; ab < (size - 1) - ac; sp++)
{
_putchar(' ');
}
for (ad = 0; ad <= ac; ad++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
