#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: - pointer to the root node of the tree
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* tree is null */
	if (!tree)
		return (0);

	/* check if all leaves are on the same level */
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);

	/* has two children */
	if (tree->right && tree->left)
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));

	/* still perfect at the end of the subtree */
	if (!tree->right && !tree->left)
		return (1);

	else /* one child */
		return (0);
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
