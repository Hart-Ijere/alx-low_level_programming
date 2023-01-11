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
char *i;
unsigned int a;

i = malloc(sizeof(char) * size);
if (size == 0 || size == NULL)
return (NULL);
for (a = 0; a < size; a++);
{
  i[a] = c;
}
return (i);
}
