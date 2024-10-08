#include "main.h"

/**
  * get_bit - return the value of a bit at a given index
  * @n: unsigned long int for searching
  * @index: index to return a bit
  * Return: the value of the bit at index or -1 if error
  */

int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);
return ((n >> index) & 1);
}
