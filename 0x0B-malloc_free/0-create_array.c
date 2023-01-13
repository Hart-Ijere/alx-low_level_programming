#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* char *create_array - funtion that creates array of chars.
* @size: size of the array.
* @c: character.
*
* Return: NULL if 0 or fail, else return pointer
*/

char *create_array(unsigned int size, char c)
{
char *ptr;
ptr = malloc(sizeof(char) * size);
ptr[0] = 'A';
*ptr = c;

if (size == 0)
{
return (NULL);
}
else
{
return (*ptr);
}
return (*ptr);
}
