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
 * bubble_sort - sort an array of integer in ascending order
 * @array: An array of integers to sort
 * @size: size of array
 * Description: prints the array after each swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;
	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swapInt(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
