#include "sort.h" 

void	shell_sort(int *arr, int length)
{
	int	gap;
	int	i;
	int	j;
	int	tmp;

	gap = length / 2; // I'm totally making this up, need to think about it
	while (gap >= 1)
	{
		//printf("gap: %d\n", gap);
		i = 0;
		while (i < length)
		{
			j = 0;
			while (j < gap && i + gap < length)
			{
				//printf("%d ", i);
				if (arr[i + gap] < arr[i])
				{
					tmp = arr[i];
					arr[i] = arr[i + gap];
					arr[i + gap] = tmp;
				}
				i++;
				j++;
			}
			i += gap;
		}
		gap--;
		//printf("\n");
		//print_array(arr, length);
	}
	insertion_sort(arr, length);
}
