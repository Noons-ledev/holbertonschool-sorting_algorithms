#include "sort.h"
/**
 * swap - swap 2 int
 * @a: 1st int
 * @b: 2nd int
 * @size: sizeof array
 */ 
void swap(int *array, size_t size, size_t a, size_t b)
{
	int temp;

	if (a != b)
	{
		temp = array[a];
		array[a] = array[b];
		array[b] = temp;
		print_array(array, size);
	}
}
/**
 * partition - split the array for the sort
 * @array: pointer to int array
 * @size: sizeof array
 * @low: lower index of partition
 * @high: higher index of partition
 * Return: the pivot
 */
int partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot;
	size_t i, j;

	if (array == NULL || low >= high)
		return (low);
	pivot = array[high]; /* choose last element */
	i = low - 1; /* smaller element */
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(array, size, i , j);
		}
	}
	swap(array, size, i + 1, high);
	return (i + 1);
}
/**
 * recursive - recusiv function for quick sort
 * @array: pointer to int array
 * @low: lower index of partition
 * @high: higer index of partition
 * @size: sizeof array
 */
void recursive(int *array, size_t low, size_t high, size_t size)
{
	if (low >= high)
		return;
	if (low < high)
	{	
		size_t p;

		p = partition(array, low, high, size); /* find the index */
		if (p > 0) /* sort element before and after the partition */
			recursive(array, low, p - 1, size);
		recursive(array, p + 1, high, size);
	}
}
/**
 * quick_sort - quick sort algorithm
 * @array: pointer to integer array
 * @size: sizeof array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	recursive(array, 0, size - 1, size);
}
