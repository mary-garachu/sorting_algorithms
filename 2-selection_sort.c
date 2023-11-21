#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers
 * @array: pointer to the array
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_value;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min_value = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_value])
				min_value = j;
		}
		if (min_value != i)
		{
			temp = array[i];
			array[i] = array[min_value];
			array[min_value] = temp;
			print_array(array, size);
		}
	}
}
