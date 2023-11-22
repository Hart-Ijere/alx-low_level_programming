#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of chars and
*                initializes it with a specific ..
* @size: integer parameter
" @c: character parameter
*
* Return: pointer to the array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
char *str;
int i;


if (str == 0)
return (NULL);

str = malloc(sizeof(char) * size);

i = 0;
while (i < size)
{
str[i] = c;
}
 
return (str);
free(str);

}
