#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value using jump search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: The value to search for
 *
 * Return: the index, or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t curr = 0;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);
		for (i = prev; i < size && i <= curr; i++)
		{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			printf("Found %d at index: %lu\n", value, i);
			return (i);
		}
		}
	printf("%d not found in the array\n", value);
	return (-1);
}
