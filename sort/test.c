#include "sort.h"

void	print_array(int *arr, int length)
{
	int i = 0;
	while (i < length)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n\n");
}

int main(void)
{
	int	length = 16;
	int	arr1[] = {3, 70, 45, 1, 9, 26, 59, 33, 82, 2, 15, 45, 10, 100, 0, 91};
	int	arr2[] = {3, 70, 45, 1, 9, 26, 59, 33, 82, 2, 15, 45, 10, 100, 0, 91};
	int	arr3[] = {3, 70, 45, 1, 9, 26, 59, 33, 82, 2, 15, 45, 10, 100, 0, 91};
	int	arr4[] = {3, 70, 45, 1, 9, 26, 59, 33, 82, 2, 15, 45, 10, 100, 0, 91};
	int	arr5[] = {3, 70, 45, 1, 9, 26, 59, 33, 82, 2, 15, 45, 10, 100, 0, 91};
	int	arr6[] = {3, 70, 45, 1, 9, 26, 59, 33, 82, 2, 15, 45, 10, 100, 0, 91};
	//time_t	before;
	//time_t	after;

	//before = time(NULL);
	bubble_sort(arr1, length);
	//after = time(NULL);
	printf("Bubble Sort\n");
	print_array(arr1, length);

	//before = time(NULL);
	selection_sort(arr2, length);
	//after = time(NULL);
	printf("Selection Sort\n");
	print_array(arr2, length);

	insertion_sort(arr3, length);
	printf("Insertion Sort\n");
	print_array(arr3, length);

	shell_sort(arr4, length);
	printf("Shell Sort\n");
	print_array(arr4, length);

	quick_sort(arr5, 0, length - 1);
	printf("Quick Sort\n");
	print_array(arr5, length);

	merge_sort(arr6, 0, length - 1);
	printf("Merge Sort\n");
	print_array(arr6, length);
	return (0);
}
