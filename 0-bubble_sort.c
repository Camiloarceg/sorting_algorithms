#include "sort.h"


/**
 * bubble_sort - Sorts an array of integers with bubble sort algorithm
 * @array: Array of numbers that's going to be sorted
 * @size: Size of array
 * Return: Nothing, will sort and print when swap
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int swaped = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		swaped = 0;
		for (j = 0; j < size - i - 1; j++)
		{

			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swaped = 1;
			}
		}
		if (!swaped)
			break;
	}
}
