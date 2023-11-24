#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function that prints a strin
 * g followed by a new line
 * @s: character array to be printed
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
return;
putchar(*s);
_puts_recursion(s + 1);
putchar('\n');
}



