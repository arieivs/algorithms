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

t_intlist	*sort_and_merge(t_intlist *list1, t_intlist *list2)
{
	t_intlist	*to_be_added;
	t_intlist	*merged_list = NULL;

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
	return (merged_list);
}

void	merge_sort(t_intlist **list)
{
	t_intlist	*first;
	t_intlist	*middle;

	// halting condition
	if (!*list || ft_intlst_size(*list) <= 1)
		return ;
	first = *list;
	middle = split_and_get_middle(*list);
	// first points to the first half
	// middle points to the second half

	// call function recursively to keep dividing
	merge_sort(&first);
	merge_sort(&middle);

	*list = sort_and_merge(first, middle);
}
