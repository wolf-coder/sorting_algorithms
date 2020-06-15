#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort -  function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 *
 *@array: The array to be sorted.
 *@size: Number of elements in @array.
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
	size_t tmp, i;
	int permuted;

	do {
		permuted = 0;
		for (i = 0; i <= size - 1; ++i)
		{
			if (array[i - 1] > array[i])
			{
				tmp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = tmp;
				permuted = 1;
				print_array(array, size);
			}
		}
	} while (permuted);
}
