# include "node.h"

int	main(void)
{
	t_node	*grandma;
	t_node	*dad;
	t_node	*oncle;
	t_node	*aunt;
	t_node	*son;
	t_node	*daughter;

	/* Creating the tree */
	grandma = ft_node_new(5);
	printf("Created grandma %d\n", grandma->n);
	dad = ft_node_new(10);
	printf("Created dad %d\n", dad->n);
	oncle = ft_node_new(12);
	printf("Created oncle %d\n", oncle->n);
	aunt = ft_node_new(15);
	printf("Created aunt %d\n", aunt->n);
	son = ft_node_new(20);
	printf("Created son %d\n", son->n);
	daughter = ft_node_new(22);
	printf("Created daughter %d\n", daughter->n);

	ft_add_kid(&grandma, dad);
	printf("Grandma has %d kid: %d\n", grandma->nb_kids, grandma->kids[0]->n);
	ft_add_kid(&grandma, oncle);
	printf("Grandma has %d kids: %d\n", grandma->nb_kids, grandma->kids[1]->n);
	ft_add_kid(&grandma, aunt);
	printf("Grandma has %d kids: %d\n", grandma->nb_kids, grandma->kids[2]->n);
	ft_add_kid(&dad, son);
	printf("Dad has %d kid: %d\n", dad->nb_kids, dad->kids[0]->n);
	ft_add_kid(&dad, daughter);
	printf("Dad has %d kids: %d\n", dad->nb_kids, dad->kids[1]->n);

	/* Searching the tree */
	printf("Is dad a son of grandma? %d\n", tree_has_node(grandma, 10));
	printf("Is mum a daughter of grandma? %d\n", tree_has_node(grandma, 11));
	printf("Is aunt a daughter of grandma? %d\n", tree_has_node(grandma, 15));
	printf("Is daughter a grandaughter of grandma? %d\n", tree_has_node(grandma, 22));
	printf("Is son a grandson of grandma? %d\n", tree_has_node(grandma, 20));
	printf("Is nephew a grandson of grandma? %d\n", tree_has_node(grandma, 27));
	return (0);
}
