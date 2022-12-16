#include "main.h"

/**
* print_square  - prints a square, followed by a new line
* @size: size of both width and length
* Return: a square made of '#'
*/

void print_square(int size)
{
int xy, xz;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (xy = 1; xy <= size; xy++)
{
_putchar('#');
for (xz = 2; xz <= size; xz++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
