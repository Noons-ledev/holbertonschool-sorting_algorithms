#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
*bubble_sort- Proceeds to a bubble sort in an array
*@array: pointer to integer array
*@size: size of the array
*Return: Nothing void
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, swap, temp;

	if (array == NULL || size < 2)
	return;
	for (i = 0; i < size - 1; i++)
	{
		swap = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swap = 1;
				print_array(array, size);
			}
		}
		if (!swap)
		break;
	}
}
