#include "sort.h"

/**
 * swap_number - Function to swap two integers in an array
 * @a: First integer
 * @b: Second integer
 */

void swap_number(int *a, int *b)
{
	int ptr;

	ptr = *a;
	*a = *b;
	*b = ptr;
}

/**
 * bubble_sort - Function to sort an array in ascending order
 * @array: The array of integers to sort
 * @size: The size of the array
 *
 * Return: Always 0 success
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool isSwapped = false;

	if (array == NULL || size < 2)
		return;

	while (isSwapped == false)
	{
		isSwapped = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_number(array + i, array + i + 1);
				print_array(array, size);
				isSwapped = false;
			}
		}
		len--;
	}
}

