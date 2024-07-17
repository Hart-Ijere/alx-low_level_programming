#include "search_algos.h"

/**
  * binary_search - Search for a value in a sorted array of
  * integers using the Binary search algorithm
  *
  * @array: Points to the first element of the array to search in
  * @size: Number of elements in array
  * @value: Value to search for
  *
  * Return: The first index where value is located
  */
int binary_search(int *array, size_t size, int value)
{
	size_t n = 0, down = 0, middle = 0, up = size - 1;

	if (array == NULL)
		return (-1);

	while (down <= up)
	{
		middle = (up + down) / 2;
		n = down;

		printf("Searching in array: ");

		for (; n <= up; ++n)
		{
			if (n != down)
				printf(", %d", array[n]);
			else
				printf("%d", array[n]);
		}

		printf("\n");

		if (array[middle] < value)
			down = middle + 1;
		else if (array[middle] > value)
			up = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
