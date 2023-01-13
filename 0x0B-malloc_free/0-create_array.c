#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - create an array of chars
* @c: character.
* @size: size of memory to print
*
* Return: NULL if 0 or fail else return ptr.
*/

char *create_array(unsigned int size, char c)
{
char *ptr;

ptr = malloc(sizeof(char) * size);
ptr[0] = 'A';
*ptr = c;
 
if (size = 0)
{
return (NULL);
}
else
{
return (ptr);
}
}
