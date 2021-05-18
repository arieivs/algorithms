void	quick_sort(int *arr, int first, int last)
{
	int	left;
	int	right;
	int	pivot;
	int	tmp;

	left = first;
	right = last;
	pivot = first;
	if (left >= right)
			return ;
	while (left < right)
	{
		while (left < last && arr[left] < arr[pivot])
			left++;
		while (right > first && arr[right] > arr[pivot])
			right--;
		if (left < right && arr[left] > arr[right])
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
	// could it be right - 1?
	quick_sort(arr, first, right);
	quick_sort(arr, right + 1, last);
}
