#include "sort.h"

/**
 * swap2 - swap 2 positions on array
 *
 * @x: first
 * @y: second
 *
 */
void swap2(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * partition - make the partition in base of the pivot.
 *
 * @array: the array
 * @low: low limit
 * @high: high limit
 * @size: size of array
 *
 * Return: int
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot_value = array[high];
	int i = low, j = low;

	for (; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap2(&array[i], &array[j]);
			i++;
		}
	}
	swap2(&array[i], &array[high]);
	print_array(array, size);
	return (i);
}

/**
 * qs - recursive function
 *
 * @array: the array
 * @low: low limit
 * @high: high limit
 * @size: size of array
 *
 */
void qs(int *array, int low, int high, size_t size)
{

	if (low < high)
	{

		int pivot_index = partition(array, low, high, size);

		qs(array, low, pivot_index - 1, size);

		qs(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - quicksort function
 *
 * @array: the array
 * @size: the size of array
 *
 */
void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
}
