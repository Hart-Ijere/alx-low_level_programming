#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - function that returns the le* ngth of a string
* @s: array of characters length to return
* Return: an integer as length of string passed
*/

int _strlen_recursion(char *s)
{
int len;
int count;
count = 0;

if (*s == '\0')
return (0);

count++;
len = count;

return (len + _strlen_recursion(s + 1));
}
