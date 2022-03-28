#include "sort_lists.c"

// TODO double check what's really needed from here

t_intlst	*ft_intlst_new(int nb)
{
	t_intlst	*list;

	list = (t_intlst *)malloc(sizeof(t_intlst));
	if (!list)
		return (NULL);
	list->nb = nb;
	list->next = 0;
	return (list);
}

void	ft_intlst_add_back(t_intlst **lst, t_intlst *new)
{
	t_intlst	*curr;

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

void	ft_intlst_push_back(t_intlst **lst, int nb)
{
	t_intlst	*new_lst;

	new_lst = ft_intlst_new(nb);
	ft_intlst_add_back(lst, new_lst);
}

int	ft_intlst_size(t_intlst *lst)
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
