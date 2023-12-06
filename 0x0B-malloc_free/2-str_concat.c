#include <stdlib.h>
#include <string.h>
#include "main.h"

/*
 * Concatenates two strings.
 * If NULL is passed, treats it as an empty strin
 * g
 * The returned pointer points to a newly alloca
 * ted space in memory
 * which contains the contents of s1 followed by
 * the contents of s2
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
return NULL;
}
strcpy(result, s1);
strcat(result, s2);
return result;
free(result);
}
