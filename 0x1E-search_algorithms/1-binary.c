#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches a value in sorted array of integers
 * using Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: -1, if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}

	int low = 0;
	int high = size - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		printf("Searching in array: ");
		for (size_t i = low; i <= (size_t)high; i++)
		{
			if (i == (size_t)high)
			{
				printf("%d\n", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return (-1);
}
