#include <stdio.h>

/**
 * first - executes before main
 * Return: no return.
 */
void __attribute__ ((constructor)) first()
{
printf("Your're beat! and yet, you must allow");
printf("\nI bore my house upon my back!\n");
}
