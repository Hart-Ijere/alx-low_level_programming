#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplies two numbers passed as arguments
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: 0 if successful, 1 if there are not exactly 2 arguments
 */
int main(int argc, char *argv[])
{
int num, num2, result;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
num = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num * num2;
printf("%d\n", result);
}

return (0);
}
