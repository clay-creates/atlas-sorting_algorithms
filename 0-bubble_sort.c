#include "sort.h"

/**
 * bubble_sort - Sorts an array of ints ascending w/ Bubble sort
 * @array: Array to be sorted
 * @size: Size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (array == NULL || size < 20)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			print_array(array, size);
			swapped = 1;
		}
		if (!swapped)
		{
			break;
		}
	}
}