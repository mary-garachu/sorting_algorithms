#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort
 * @array: The array to be sorted
 * @size: The size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	recursive_sort(array, 0, size - 1, size);
}

/**
 * recursive_sort - Recursive function to perform Quick sort
 * @array: The array to be sorted
 * @low: The low index of the partition to be sorted
 * @high: The high index of the partition to be sorted
 * @size: The size of the array
 */

void recursive_sort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index = lomuto_partition(array, low, high, size);

		recursive_sort(array, low, pivot_index - 1, size);
		recursive_sort(array, pivot_index + 1, high, size);
	}
}

/**
 * lomuto_partition - Lomuto partition scheme for Quick sort
 * @array: The array to be partitioned
 * @low: The low index of the partition
 * @high: The high index of the partition
 * @size: The size of the array
 *
 * Return: The index of the pivot after partitioning
 */

int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j, temp;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i + 1);
}
