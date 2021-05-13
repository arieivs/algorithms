int	*bubble_sort(int *arr, int length)
{
	int	sorted;
	int	i;
	int	tmp;

	sorted = 0;
	i = 0;
	while (i < length - 1)
	{
		if (arr[i] > arr[i + 1])
		{
			tmp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = tmp;
			sorted = 1;
		}
		i++;
	}
	if (sorted)
		return (bubble_sort(arr, length));
	return (arr);
}
