#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* _strdup - function that returns a pointer to a 
* newly allocated space in memory, which contains* a copy of the string passed as parameter
* @str: array of characters to be copied
* Return: Null if insufficient memory
*/

char *_strdup(char *str)
{
char *ptr;
int i;
int len;
len = strlen(str);
ptr = malloc(sizeof(char) * len);

if (ptr == 0)
return (NULL);

if (*str == '\0')
return (NULL);

i = 0;
while (*str != '\0')
{
ptr[i] = *str;
i++;
str++;
}

return (ptr);
free(ptr);
}
