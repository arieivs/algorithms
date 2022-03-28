# include "node.h"

/* Looks for the node to_find in all the children of root
 * Not just the immediate children, also the children of children
 * Returns true (1) or false (0) accordingly
 */

int	tree_has_node(t_node *root, int to_find)
{
	int	i;

	// halting condition
	if (!root)
		return (0);
	if (root->n == to_find)
		return (1);
	i = 0;
	while (i < root->nb_kids)
	{
		if (tree_has_node(root->kids[i], to_find))
			return (1);
		i++;
	}
	return (0);
}
