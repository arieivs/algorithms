#include "sort_lists.h"

void	print_list(t_intlist *list)
{
	while (list)
	{
		printf("%d ", list->n);
		list = list->next;
	}
	printf("\n");
}

static void	intlist_del(void *content)
{
	*(int *)content = 0;
}

int	main(void)
{
	int			arr[] = {35, 10, 22, 5, 9, 44, 0, -1, 80, 53, 17};
	int			arr_len = 11;
	int			i = 1;
	t_intlist	*list;
	
	list = ft_intlst_new(arr[0]);
	while (i < arr_len)
		ft_intlst_push_back(&list, arr[i++]);
	print_list(list);	
	merge_sort(&list);
	print_list(list);
	ft_lstclear(&list, &intlist_del);
	return (0);
}
