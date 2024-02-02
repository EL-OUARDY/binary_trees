#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 * @tree: - pointer to the root node of the tree
 * Return: the depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/* tree is null */
	if (!tree)
		return (0);

	/* count how many parents */
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
