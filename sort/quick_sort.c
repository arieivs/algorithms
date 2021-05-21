void	quick_sort(int *arr, int start, int end)
{
	int	i;
	int	future_pivot_i;
	int	pivot;
	int	tmp;

	// halting condition
	if (start >= end)
			return ;
	
	// to iterate over the array:
	i = start;
	// to know where the pivot will be
	future_pivot_i = start;
	// this variable is here only for readability. could be = arr[start] too
	pivot = arr[end];

	while (i < end)
	{
		// if a number is lower than the pivot:
		// place it on the left (swap it)
		// move future location of the pivot forward
		if (arr[i] < pivot)
		{
			tmp = arr[i];
			arr[i] = arr[future_pivot_i];
			arr[future_pivot_i] = tmp;
			future_pivot_i++;
		}
		i++;
	}
	// at this point our array is organised in this way:
	// [lower numbers, higher numbers, pivot]
	// let's place the pivot in between
	// future_pivot_i is pointing at the right position
	arr[end] = arr[future_pivot_i];	
	arr[future_pivot_i] = pivot;

	// call function recursively for lower and higher blocks
	quick_sort(arr, start, future_pivot_i - 1);
	quick_sort(arr, future_pivot_i + 1, end);
}
