#include "sort.h"


int partition(int *array, int low, int high, size_t size)
{
	int pivot_value = array[high];
	int i = low, j = low; 

	for (; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[high]);
	print_array(array, size);
	return i;
}

void qs(int *array, int low, int high, size_t size)
{

	if (low < high)
	{

		int pivot_index = partition(array, low, high, size);

		qs(array, low, pivot_index - 1, size);

		qs(array, pivot_index + 1, high, size);
	}
}

void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
}