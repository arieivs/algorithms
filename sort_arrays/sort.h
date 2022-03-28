#ifndef SORT_H
# define SORT_H

# include <stdlib.h>
# include <stdio.h>
// # include <time.h>

void	bubble_sort(int *arr, int length);
void	selection_sort(int *arr, int length);
void	insertion_sort(int *arr, int length);
void	shell_sort(int *arr, int length);
void	quick_sort(int *arr, int start, int end);
void	merge_sort(int *arr, int start, int end);
void	print_array(int *arr, int length);

#endif
