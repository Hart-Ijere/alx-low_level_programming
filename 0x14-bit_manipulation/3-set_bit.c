#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a provided index
  * @n: unsigned long to change
  * @index: index to change to one
  * Return: 1 if it worked or -1 if an error
  */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63 || !n)
return (-1);
(*n |= 1 << index);
return (1);
}
