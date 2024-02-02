#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf (no children)
 *
 * @parent: - pointer to target node
 * Return: integer | 1 if leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node && !node->left && !node->right)
        return (1); /* leaf */

    return (0); /* not a leaf */
}
