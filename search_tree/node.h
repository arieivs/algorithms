#ifndef NODE_H
# define NODE_H

# include <stdlib.h>
# include <stdio.h>

typedef struct s_node {
	int				n;
	struct s_node	**kids;
	int				nb_kids;
}				t_node;

t_node	*ft_node_new(int n);
void	ft_add_kid(t_node **parent, t_node *new_kid);
int		tree_has_node(t_node *root, int to_find);

#endif
