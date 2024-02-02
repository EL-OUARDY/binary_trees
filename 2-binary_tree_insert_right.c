#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: - pointer to the parent node
 * @value: - node value
 * Return: pointer to the new node, NULL on failure or parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	new_node->left = NULL;

	/* if parent already has a right-child */
	if (parent->right)
	{
		new_node->right = parent->right;
		(parent->right)->parent = new_node;
	}
	else /* parent with no right-child */
		new_node->right = NULL;

	/* set the new node as the right-child of the target parent */
	parent->right = new_node;

	return (new_node);
}
