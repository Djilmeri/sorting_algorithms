#include "sort.h"
/**
 * swapInt - swap two integers in an array
 * @nb1: The first integer to swap
 * @nb2: The seconde integer to swap
 */
void swapInt(int *nb1, int *nb2)
{
int tmp;

tmp = *nb1;
*nb1 = *nb2;
*nb2 = tmp;
}


/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swapInt(array + i, min);
			print_array(array, size);
		}
	}
}
