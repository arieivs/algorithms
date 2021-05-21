#include <stdlib.h>
#include <stdio.h>

// divide the array in two and call merge on the result of dividing them again
// in this way it will first divide the array in single elements
// and then merge then in an ordered manner

int	*merge(int *arr1, int size1, int *arr2, int size2)
{
	int	i;
	int	j;
	int	*arr_total;

	i = 0;
	j = 0;
	arr_total = (int *)malloc(sizeof(int) * (size1 + size2));
	while (i < size1 || j < size2)
	{
		if (arr1[i] && (j == size2 || arr1[i] < arr2[j]))
		{
			arr_total[i + j] = arr1[i];
			i++;
		}
		else if (arr2[j])
		{
			arr_total[i + j] = arr2[j];
			j++;
		}
	}
	return (arr_total);
}

int	*merge_sort(int *arr, int start, int end)
{
	int	middle;

	// halting condition
	if (start >= end)
		return (arr);
	
	middle = (end - start) / 2;
	printf("yo start %d end %d\n", start, end);
	return (merge(merge_sort(arr, start, middle), middle + 1 - start,
		merge_sort(arr, middle + 1, end), end + 1 - middle));
}
