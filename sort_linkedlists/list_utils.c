#include "sort_lists.h"

t_intlist	*ft_intlst_new(int nb)
{
	t_intlist	*list;

	list = (t_intlist *)malloc(sizeof(t_intlist));
	if (!list)
		return (NULL);
	list->n = nb;
	list->next = 0;
	return (list);
}

void	ft_intlst_add_back(t_intlist **lst, t_intlist *new)
{
	t_intlist	*curr;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	curr = *lst;
	while (curr->next)
		curr = curr->next;
	curr->next = new;
}

void	ft_intlst_push_back(t_intlist **lst, int nb)
{
	t_intlist	*new_lst;

	new_lst = ft_intlst_new(nb);
	ft_intlst_add_back(lst, new_lst);
}

int	ft_intlst_size(t_intlist *lst)
{
	int	size;

	if (!lst)
		return (0);
	size = 1;
	while (lst->next)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
