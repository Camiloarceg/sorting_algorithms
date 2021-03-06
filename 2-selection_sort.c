#include "sort.h"

/**
 * swap - swaps positions
 *
 * @xp: left
 * @yp: right
 *
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * selection_sort - selection sort
 * @array: pointer to list
 * @size: size
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
			}
		}
		if (min == i)
			continue;
		swap(&array[i], &array[min]);
		print_array(array, size);
	}
}
