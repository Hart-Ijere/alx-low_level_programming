#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - function that prints a st* ring in reverse
* @s: character array to be printed
*
* Return: Nothing
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return(void);

_print_rev_recursion(s + 1);
putchar(*s);
}
