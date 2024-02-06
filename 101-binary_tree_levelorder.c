#include "binary_trees.h"

void bt_levelorder_helper(const binary_tree_t *tree, void (*func)(int),
						  size_t current_level);

/**
 * binary_tree_levelorder - goes through a binary tree using level-order traversal
 *
 * @tree: - pointer to the root node of the tree to traverse
 * @func: - pointer to a function to call for each node
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t current_level, tree_height = 0;

	/* tree or func is null */
	if (!tree || !func)
		return;

	tree_height = binary_tree_height(tree) + 1;

	for (current_level = 1; current_level <= tree_height; current_level++)
		bt_levelorder_helper(tree, func, current_level);
}

/**
 * bt_levelorder_helper - goes through a binary tree using level-order traversal
 *
 * @tree: - pointer to the root node of the tree to traverse
 * @func: - pointer to a function to call for each node
 * @current_level: - tree reached level
 * Return: void
 */
void bt_levelorder_helper(
	const binary_tree_t *tree,
	void (*func)(int),
	size_t current_level)
{
	if (current_level == 1)
		func(tree->n); /* call handler function */
	else
	{
		bt_levelorder_helper(tree->left, func, current_level - 1);
		bt_levelorder_helper(tree->right, func, current_level - 1);
	}
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: - pointer to the root node of the tree
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	/* tree is null */
	if (!tree)
		return (0);

	/* recursively get the height of each direction */
	left_height = tree->left ? (1 + binary_tree_height(tree->left)) : 0;
	right_height = tree->right ? (1 + binary_tree_height(tree->right)) : 0;

	return (left_height > right_height ? left_height : right_height);
}
