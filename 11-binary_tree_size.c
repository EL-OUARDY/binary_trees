#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: - pointer to the root node of the tree
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	/* tree is null */
	if (!tree)
		return (0);

	/* count current node */
	size++;

	/* recursively calculate how many nodes in the subtrees */
	size += binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (size);
}
