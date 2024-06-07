#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the newly allocated space in memory
 *         containing s1, followed by the first n bytes of s2,
 *and null terminated. If the function fails, it returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat_str;
unsigned int i, j, len1, len2;
/* Treat NULL strings as empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/* Calculate lengths of s1 and s2 */
for (len1 = 0; s1[len1] != '\0'; len1++)
for (len2 = 0; s2[len2] != '\0'; len2++)
/* Use the entire string s2 if n is greater or equal to len2 */
if (n >= len2)
n = len2;
/* Allocate memory for the concatenated string */
concat_str = malloc(len1 + n + 1);
if (concat_str == NULL)
return (NULL);
/* Copy s1 to concat_str */
for (i = 0; i < len1; i++)
concat_str[i] = s1[i];
/* Copy the first n bytes of s2 to concat_str */
for (j = 0; j < n; j++)
concat_str[len1 + j] = s2[j];
/* Null terminate the concatenated string */
concat_str[len1 + j] = '\0';
return (concat_str);
}
