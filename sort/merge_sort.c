#include <stdlib.h>

// divide the array in two and call merge on both halves 
// so it will first divide the array in single elements and then merge them in an ordered manner

void	merge(int *arr, int start, int middle, int end)
{
	int	i;
	int	j;
	int	k;
	int	*tmp_arr;

	i = start;
	j = middle + 1;
	k = 0;
	tmp_arr = (int *)malloc(sizeof(int) * (end + 1 - start));
	
	// copy the smallest number
	while (i <= middle && j <= end)
	{
		if (arr[i] <= arr[j])
			tmp_arr[k] = arr[i++];
		else
			tmp_arr[k] = arr[j++];
		k++;
	}
	// in case the first half is bigger
	while (i <= middle)
		tmp_arr[k++] = arr[i++];
	// in case the second half is bigger
	while (j <= end)
		tmp_arr[k++] = arr[j++];
	
	// update array with the more sorted temporary version
	i = start;
	k = 0;
	while (i <= end)
		arr[i++] = tmp_arr[k++];
	free(tmp_arr);
}

void	merge_sort(int *arr, int start, int end)
{
	int	middle;

	// halting condition
	if (end - start <= 0)
		return ;
	
	middle = (start + end) / 2;

	// call function recursively to keep dividing
	merge_sort(arr, start, middle);
	merge_sort(arr, middle + 1, end);
	
	// and then merge once you have the result
	merge(arr, start, middle, end);
}
