#include "sort_lists.h"

t_intlist	*split_and_get_middle(t_intlist *list)
{
	int			i;
	int			half_size;
	t_intlist	*middle;

	i = 0;
	half_size = ft_intlst_size(list) / 2;
	while (i < half_size -  1)
	{
		list = list->next;
		i++;
	}
	// list is pointing to the one before the middle
	middle = list->next;
	list->next = NULL;
	return (middle);
}

void	sort_and_merge(t_intlist *list1, t_intlist *list2)
{
	t_intlist	*to_be_added;
	t_intlist	*merged_list;

	while (list1 || list2)
	{
		if (list1 && (!list2 || list1->n <= list2->n))
		{
			to_be_added = list1;
			list1 = list1->next;
		}
		else if (list2) // think I dont need the if
		{
			to_be_added = list2;
			list2 = list2->next;
		}
		to_be_added->next = NULL;
		ft_intlst_add_back(&merged_list, to_be_added);
	}
	print_list(merged_list);
	// what do I do with it??
}

void	merge_sort(t_intlist *list)
{
	t_intlist	*middle;

	if (!list || ft_intlst_size(list) <= 1)
		return ;
	middle = split_and_get_middle(list);
	// list points to the first half
	// middle points to the second half
	printf("middle: %d\n", middle->n);
	print_list(list);
	print_list(middle);

	// call function recursively to keep dividing
	merge_sort(list);
	merge_sort(middle);

	sort_and_merge(list, middle);
}
