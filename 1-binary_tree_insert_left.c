#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: - pointer to the parent node
 * @value: - node value
 * Return: pointer to the new node, NULL on failure or parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* parent is null */
	if (!parent)
		return (NULL);

	/* alocate memory */
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node) /* allocation failed */
		return (NULL);

	/* populate the newly created node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	/* if parent already has a left-child */
	if (parent->left)
	{
		new_node->left = parent->left;
		(parent->left)->parent = new_node;
		parent->left = new_node;
	}
	else /* parent with no left-child */
		new_node->left = NULL;

	return (new_node);
}
