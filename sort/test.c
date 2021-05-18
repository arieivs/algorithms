#include <stdio.h>
#include <time.h>

int	*bubble_sort(int *arr, int length);
int	*selection_sort(int *arr, int length);
void	quick_sort(int *arr, int first, int last);

int main(void)
{
	int	i = 0;
	int	length = 16;
	int	arr1[] = {3, 70, 45, 1, 9, 26, 59, 33, 82, 2, 15, 45, 10, 100, 0, 91};
	int	arr2[] = {3, 70, 45, 1, 9, 26, 59, 33, 82, 2, 15, 45, 10, 100, 0, 91};
	time_t	before;
	time_t	after;
	int	a[] = {7, 9, 8, 3, 6, 5, 4};
	//int	a[] = {4, 6, 3, 2, 1, 9, 7};

	before = time(NULL);
	bubble_sort(arr1, length);
	after = time(NULL);
	printf("Bubble Sort took %f seconds to sort\n", (float)(after - before));
	while (i < length)
	{
		printf("%d ", arr1[i]);
		i++;
	}
	printf("\n\n");

	before = time(NULL);
	selection_sort(arr2, length);
	after = time(NULL);
	printf("Selection Sort took %f seconds to sort\n", (float)(after - before));
	i = 0;
	while (i < length)
	{
		printf("%d ", arr2[i]);
		i++;
	}
	printf("\n\n");

	quick_sort(a, 0, 6);
	printf("Quick Sort\n");
	i = 0;
	while (i < 7)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n\n");
	return (0);
}
