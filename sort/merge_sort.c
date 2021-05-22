#include <stdlib.h>

// divide the array in two and call merge on the result of dividing them again
// in this way it will first divide the array in single elements
// and then merge then in an ordered manner

void	merge(int *arr, int start, int middle, int end, int *tmp_arr)
{
	int	i;
	int	j;
	int	k;

	i = start;
	j = middle + 1;
	k = start;
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
	while (i <= end)
	{
		arr[i] = tmp_arr[i];
		i++;
	}
}

void	divide(int *arr, int start, int end, int *tmp_arr)
{
	int	middle;
	// halting condition
	if (end - start <= 0)
		return ;
	
	middle = (start + end) / 2;
	// call function recursively to keep dividing
	divide(arr, start, middle, tmp_arr);
	divide(arr, middle + 1, end, tmp_arr);
	// and then merge once you have the result
	merge(arr, start, middle, end, tmp_arr);
}

void	merge_sort(int *arr, int start, int end)
{
	int	*tmp_arr;

	tmp_arr = (int *)malloc(sizeof(int) * (end + 1 - start));
	divide(arr, start, end, tmp_arr);
	free(tmp_arr);
}
