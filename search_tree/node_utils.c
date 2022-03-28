#include "node.h"

t_node	*ft_node_new(int n)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->n = n;
	node->kids = NULL;
	node->nb_kids = 0;
	return (node);
}

void	ft_add_kid(t_node **parent, t_node *new_kid)
{
	t_node	**new_kids;
	int		i;

	if (!*parent || !new_kid)
		return ;
	new_kids = (t_node **)malloc(sizeof(t_node *) * ((*parent)->nb_kids + 1));	
	i = 0;
	if ((*parent)->kids)
	{
		while (i < (*parent)->nb_kids)
		{
			new_kids[i] = (*parent)->kids[i];
			i++;
		}
		free((*parent)->kids);
	}
	new_kids[i] = new_kid;
	(*parent)->kids = new_kids;
	(*parent)->nb_kids += 1;
}	
