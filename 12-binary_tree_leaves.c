#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: - pointer to the root node of the tree
 * Return: the number of leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t nb_leaves = 0;

	/* tree is null */
	if (!tree)
		return (0);

	/* count as a leaf */
	if (!tree->left && !tree->right)
		return (1);

	/* recursively calculate how many nodes in the subtrees */
	nb_leaves += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (nb_leaves);
}
