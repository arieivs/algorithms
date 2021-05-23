#include "sort.h" 

void	shell_sort(int *arr, int length)
{
	int	gap;
	int	i;
	int	tmp;

	gap = length / 2; 
	while (gap >= 1)
	{
		i = 0;
		while (i + gap < length)
		{
			if (arr[i + gap] < arr[i])
			{
				tmp = arr[i];
				arr[i] = arr[i + gap];
				arr[i + gap] = tmp;
			}
			i++;
		}
		gap--;
	}
}
