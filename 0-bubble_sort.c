#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers with bubble sort algorithm
 * @array: Array of numbers that's going to be sorted
 * @size: Size of array
 * Return: Nothing, will sort and print when swap
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, swap = 0;
	int n;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			n = array[j];

			if (n > array[j + 1])
			{
				array[j] = array[j + 1];
				array[j + 1] = n;
				swap = 1;
				print_array(array, size);
			}
		}
		if (!swap)
			break;
	}
}
