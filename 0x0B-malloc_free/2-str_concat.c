#include <stdlib.h>
#include <string.h>
#include "main.h"

/*
 * *str_concat - function that concatenates
 * two strings
 * If NULL is passed, treats it as an empty
 * string
 * and null-terminated.
 * @s1: string to be concaneted
 * @s2: string to be concaneted
 *
 * Return: NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
char *result;
size_t len_s1;
size_t len_s2;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len_s1 = strlen(s1);
len_s2 = strlen(s2);
result = (char *)malloc(len_s1 + len_s2 + 1);
if (result == NULL)
{
return (NULL);
}
strcpy(result, s1);
strcat(result, s2);
return (result);
free(result);
}
