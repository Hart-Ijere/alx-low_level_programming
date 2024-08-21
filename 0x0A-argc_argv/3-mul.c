#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two integers and prints the result
 * @argc: counts number of arguments
 * @argv: stores the aarguments passed
 * @__attribute__: makes compiler skip an argument without complaining
 *
 * Return: Always zero
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
  
int num;
int num2;
int result;
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
  
