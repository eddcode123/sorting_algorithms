#include "sort.h"

/**
 * bubble_sort - sort an array in ascending order
 * using bubble sort algorithm
 * @array: pointer to the first element of array
 * @size: size of array
 *
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	/* declare varibles to be used in array */
	int i, j, temp, flag;

	/* use a loop and swap elements to respective position */
	for (i = 0; i < size - 1; i++)
	{
		/* other loop is for each pass which is n - 1 */
		/* use flag to optimize and check if a swap is not done */
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			/* check for max value each iteration */
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				/* print array after swap */
				print_array(array, size);
				flag = 1;
			}
		}
		/* check if flag == 0 */
		if (flag == 0)
		{
			/* if flag == 0 means array is sorted */
			break;
		}

	}
}
