#include <stdio.h>
#include "sort.h"
#include <stdlib.h>
int ga = 10;
int k = 0;
void permut(int *Array , int i, int j)
{
	int tmp;
	
        tmp = Array[i];
	Array[i] = Array[j];
	Array[j] = tmp;
}
/**
 *quick_sort - unction that sorts an array of integers in ascending order
 *using the Selection sort algorithm.
 *
 *@array: The array to be sorted.
 *@size: The size of @array.
 *
 *Return: Void.
 */
int organize(int * Array, int pivot)
{
	int i;
	int Left  = 0,Right;
	int AllBig = 0;

	if ( !k )
	{
		ga = pivot + 1;
		k = 1;
	}
	for (i = 0; i < pivot; ++i) {
		
		if (Array[i] > Array[pivot]){
			Left = i;
			AllBig = 1;
		        break;
		}
	}
	
	if (!AllBig)
		return 3;
	Right = pivot;
	for (i = pivot ; i >= 0; --i) {
		if (Array[i] < Array[pivot]){
			Right = i;
			break;
		}
	}
	if (Left < Right)
	{
		permut(Array, Left, Right);
		
		return 2;
	} else
		permut(Array, Left, pivot);
        
	return 5;
}
void quick_sort(int *array, size_t size)
{
	int pivot = size - 1;
	int r = 0;

	
	if (size >= 2)
	{
		r = organize(array, pivot);
		if ( r == 2 || r == 5)
			print_array(array, ga); 
		quick_sort(array, size - r % 2);
	}
}

