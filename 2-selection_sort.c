#include "sort.h"
/**
 * selection_sort - selection sort algorithm
 * @array: pointer to integer array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		if (i != min)
			print_array(array, size);
	}
}
