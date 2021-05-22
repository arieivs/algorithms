int	*insertion_sort(int *arr, int length)
{
	int i;
	int	j;
	int	k;
	int tmp;

	i = 1;
	while (i < length)
	{
		j = i - 1;
		k = i;
		while (j >= 0)
		{
			if (arr[k] < arr[j])
			{
				tmp = arr[k];
				arr[k] = arr[j];
				arr[j] = tmp;
				k = j;
			}
			j--;
		}
		i++;
	}
	return (arr);
}
