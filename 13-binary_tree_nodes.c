#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: - pointer to the root node of the tree
 * Return: nodes number
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nb_nodes = 0;

	/* tree is null */
	if (!tree)
		return (0);

	/* count as a leaf */
	if (tree->left || tree->right)
		nb_nodes++; /* a node */

	/* recursively calculate how many nodes in the subtrees */
	nb_nodes += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (nb_nodes);
}
