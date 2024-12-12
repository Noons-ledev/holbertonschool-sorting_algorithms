#include "sort.h"
/**
 * swap - swap 2 int
 * @a: 1st int
 * @b: 2nd int 
 */ 
void swap(int *a, int *b)
{
    int *temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
/**
 * partition -
 * @array: pointer to integer array
 * @size: size of the array
 */
int partition(int *array, size_t size)
{
    size_t i, j, point;

    point = array[size];

}
/**
 * quick_sort - quick sort algorithm
 * @array: pointer to integer array
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
    size_t i, j;
    partition (array, size);
}