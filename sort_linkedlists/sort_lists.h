#ifndef SORT_LISTS_H
# define SORT_LISTS_H

# include <stdlib.h>
# include <stdio.h>

typedef struct	s_intlist	{
	int					n;
	struct s_intlist	*next;
}				t_intlist;

t_intlist	*ft_intlst_new(int nb);
void		ft_intlst_add_back(t_intlist **lst, t_intlist *new);
void		ft_intlst_push_back(t_intlist **lst, int nb);
int			ft_intlst_size(t_intlist *lst);
void		ft_lstclear(t_intlist **lst, void (*del)(void *));
void		merge_sort(t_intlist **list);
void		print_list(t_intlist *list);

#endif
