#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse binary tree using port-order method
 *
 * @tree: - pointer to the root node of the tree to traverse
 * @func: - pointer to a function to call for each node
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* tree or func is null */
	if (!tree || !func)
		return;

	/* recursively deal with subtrees */
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	/* call handler function */
	func(tree->n);
}
