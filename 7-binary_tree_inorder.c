#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse binary tree using in-order method
 *
 * @tree: - pointer to the root node of the tree to traverse
 * @func: - pointer to a function to call for each node
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* tree or func is null */
	if (!tree || !func)
		return;

	/* recursively deal with subtrees */
	binary_tree_inorder(tree->left, func);
	/* call handler function */
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
