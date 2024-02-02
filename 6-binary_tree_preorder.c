#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse binary tree using pre-order method
 *
 * @tree: - pointer to the root node of the tree to traverse
 * @func: - pointer to a function to call for each node
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* tree or func is null */
	if (!tree || !func)
		return;

	/* call handler function */
	func(tree->n);
	/* recursively deal with subtrees */
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
