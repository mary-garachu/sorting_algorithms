#include "sort.h"

/**
 * bubble_sort - sorts array using bubble sort
 * @array: Array to be sorted
 * @size: Size of array
 * Description: Function that sorts an array using the bubble sort method
 * Return: 0
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}

/**
 * swap - Function that swaps two values
 *
 * @a: First value
 * @b: Second value
 * Return: 0
void swap(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = tmp;
}
*/
