#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * array ofintegers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int index;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			index = i;
			return (index);
		}
	}
	return (-1);
}
