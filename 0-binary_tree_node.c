#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @prnt: A pointer to the parent of the node to create.
 * @val: The value to put in the new node.
 * Return: If an error occurs - NULL.
 * Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *prnt, int val)
{
	binary_tree_t *new;
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->prnt = prnt;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
