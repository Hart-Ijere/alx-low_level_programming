#include <stdio.h>

/**
 * _puts_recursion - function that prints a string followed by new line.
 * @s: parameter
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
  
if (*s == '\0')
  
{
  
return;
}
 
putchar(*s);
_puts_recursion(s + 1);
putchar('\n');
}


