#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending
 *				 order using the Bubble sort algorithm
 *
 * @array: the array.
 * @size: the size of the array.
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped = 1;

	for (i = 0; i < size - 1; i++)
	{
	swapped = 2;
	for (j = 0; j < size - i - 1; j++)
	{
		if (array[j] > array[j + 1])
		{
			swap(&array[j], &array[j + 1]);
			print_array(array, size);
			swapped = 1;
		}
	}
	if (swapped == 2)
		break;
	}
}
