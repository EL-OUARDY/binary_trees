#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 *
 * @node: - pointer to the target node to check
 * Return: integer | 1 if root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1); /* root */

	return (0); /* not a root */
}
