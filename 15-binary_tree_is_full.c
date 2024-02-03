#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: - pointer to the root node of the tree
 * Return: 1 if full, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* tree is null */
	if (!tree)
		return (0);

	/* still full at the end of the subtree */
	if (!tree->right && !tree->left)
		return (1);

	return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
}
