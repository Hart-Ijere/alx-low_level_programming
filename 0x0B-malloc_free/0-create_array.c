#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of chars
* @size: size of the array
* @c: initial array value
*
* Return: Null if size is zero
*/

*create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

if (size == 0)
return (NULL);
str = (char *)malloc(sizeof(char) * size);

i = 0;
while (i < size)
{
str[i] = c;
i++;
}

return (str);
free(str);
}
