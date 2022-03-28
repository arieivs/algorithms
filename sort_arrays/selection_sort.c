void	selection_sort(int *arr, int length)
{
	int	i;
	int	j;
	int	min;
	int	tmp;

	i = 0;
	while (i < length)
	{
		j = i + 1;
		min = i;
		while (j < length)
		{
			if (arr[j] < arr[min])
				min = j;
			j++;
		}
		if (min != i)
		{
			tmp = arr[i];
			arr[i] = arr[min];
			arr[min] = tmp;
		}
		i++;
	}
}
