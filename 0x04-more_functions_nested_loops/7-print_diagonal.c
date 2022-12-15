#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: input number of times '\' should be printed
* Return: a diagonal
*/

void print_diagonal(int n)
{

int cz, cs;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (cz = 1; cz <= n; cz++)
{
for (cs = 1; cs < cz; cs++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');

}
}
}
