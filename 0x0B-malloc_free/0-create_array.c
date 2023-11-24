#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of chars and
*                initializes it with a specific .
* @size: determines the array size
" @c: charactee to be initialized
*
* Return: pointer to the array or NULL if it fail
*/

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;


if (size == 0)
return (NULL);
str = (char *)malloc(sizeof(char) * size);
if (str == 0)
return (NULL)
 
i = 0;
while (i < size)
{
str[i] = c;
i++;
}
 
return (str);

}
