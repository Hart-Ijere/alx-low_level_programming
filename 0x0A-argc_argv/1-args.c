#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed to a program
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
