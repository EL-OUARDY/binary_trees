#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 *
 * @tree: - pointer to the tree node of the tree to traverse
 * Return: 1 if full, 0 if not
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	/* tree is null */
	if (!tree)
		return (0);

	size = binary_tree_size(tree);
	return (bt_is_complete_helper(tree, 0, size));
}

/**
 * bt_is_complete_helper - help checks if a binary tree is complete
 *
 * @tree: - pointer to the tree node of the tree to traverse
 * @index: - index to check
 * @size: - binary tree size
 * Return: 1 if full, 0 if not
 */
int bt_is_complete_helper(const binary_tree_t *tree, int index, int size)
{
	// Check if the tree is complete
	if (tree == NULL)
		return (1);

	if (index >= size)
		return (0);

	return (bt_is_complete_helper(tree->left, 2 * index + 1, size) && bt_is_complete_helper(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: - pointer to the tree node of the tree
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
