#include <stdio.h>
#include "sort.h"
#include <stdlib.h>

/**
 *selection_sort - unction that sorts an array of integers in ascending order
 *using the Selection sort algorithm.
 *
 *@array: The array to be sorted.
 *@size: The size of @array.
 *
 *Return: Void.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp, Min;

	for (i = 0; i < size - 1; i++)
	{
		Min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[Min])
				Min = j;
		}
		if (Min != i)
		{
			tmp = array[i];
			array[i] = array[Min];
			array[Min] = tmp;
			print_array(array, size);
		}
	}
}
