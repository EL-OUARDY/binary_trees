#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: - pointer to the target node
 * Return: uncle node if any, NULL if doesn't exist
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	/* node or one of it's parents is null */
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		uncle = node->parent->parent->right;
	else
		uncle = node->parent->parent->left;

	return (uncle);
}
