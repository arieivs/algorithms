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

void	merge_sort(t_intlist *list)
{
	t_intlist	*middle;

	if (!list || ft_intlst_size(list) <= 1)
		return ;
	// instead of finding indexes, we should really split
	// making them point null
	middle = split_and_get_middle(list);
	printf("middle: %d\n", middle->n);
}
