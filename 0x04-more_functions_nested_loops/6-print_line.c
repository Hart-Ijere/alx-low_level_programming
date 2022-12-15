#include "main.h"

/**
* print_line - draws a straight line in the terminal
* @n: input number of times to print '_'
* Return: a straight line
*/

void print_line(int n)
{
int str_line;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (str_line = 1; str_line <= n; str_line++)
{
_putchar('_');
}
_putchar('\n');
}
}
