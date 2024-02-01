#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: - pointer to the parent node
 * @value: - node value
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* alocate memory */
	new_node = malloc(sizeof(binary_tree_t));

	/* allocation failed */
	if (!new_node)
		return (NULL);

	/* populate the newly created node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;

	return (new_node);
}
