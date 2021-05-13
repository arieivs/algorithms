#include <stdio.h>
#include <time.h>

int	*bubble_sort(int *arr, int length);

int main(void)
{
	int	i = 0;
	int	length = 16;
	int	arr[] = {3, 70, 45, 1, 9, 26, 59, 33, 82, 2, 15, 45, 10, 100, 0, 91};
	int	*bubble_sorted;
	time_t	before;
	time_t	after;

	before = time(NULL);
	bubble_sorted = bubble_sort(arr, length);
	after = time(NULL);
	printf("Bubble Sort took %f seconds to sort\n", (float)(after - before));
	while (i < length)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
