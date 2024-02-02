#include "binary_trees.h"

/**
 * binary_tree_delete - delete an entire binary tree using recursive function
 *
 * @tree: - pointer to the root node of the target tree
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
    /* tree is null */
    if (!tree)
        return;

    /* recursively free each right/left child node */
    binary_tree_delete(tree->right);
    binary_tree_delete(tree->left);
    free(tree);
    tree = NULL;
}
