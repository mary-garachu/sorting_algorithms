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
	unsigned int i, j;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
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
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = tmp;
}
