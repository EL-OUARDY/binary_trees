#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: - pointer to the root node of the tree
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	/* tree is null */
	if (!tree)
		return (0);

	/* Balance Factor = Height of Left Subtree - Height of Right Subtree */
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
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
	left_height = tree->left ? (1 + binary_tree_height(tree->left)) : 1;
	right_height = tree->right ? (1 + binary_tree_height(tree->right)) : 1;

	return (left_height > right_height ? left_height : right_height);
}
