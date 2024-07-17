#include "search_algos.h"

/**
  * linear_search - Search for a value in an array of
  * integers using the Linear search algorithm
  *
  * @array: Pointes to the first element of the array to search in
  * @size: Number of elements in array
  * @value: Value to search for
  *
  * Return: First index where value is located
  */
int linear_search(int *array, size_t size, int value)
{
	size_t n = 0;

	if (array == NULL)
		return (-1);

	for (; n < size; ++n)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);

		if (array[n] == value)
			break;
	}

	if (n == size)
		return (-1);

	return (n);
}
