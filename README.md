# Binary Trees — ALX SE
0x1D. C - Binary trees

`C Language` `Algorithm` `Data structure`

## What is a Binary Tree?
A `binary tree` is a **hierarchical** data structure composed of nodes, where each node has at most two children, referred to as the left child and the right child.

## Binary Tree VS Binary Search Tree
While both are binary trees, a **binary search tree** (BST) has the additional property that for each node, all nodes in its left subtree have values less than the node's value, and all nodes in its right subtree have values greater than the node's value. This property enables efficient searching, insertion, and deletion operations.

## Time Complexity Gain Compared to Linked Lists
Binary trees offer improved time complexity for certain operations compared to linked lists. For example, searching, insertion, and deletion in a balanced binary tree have an average time complexity of **O(log n)**, whereas in a linked list, these operations have a time complexity of **O(n)**.

## Depth, Height, and Size of a Binary Tree
- **Depth**: The depth of a node is the number of edges from the root node to that node.
- **Height**: The height of a tree is the maximum depth of any node in the tree.
- **Size**: The size of a binary tree is the total number of nodes in the tree.
## Different Traversal Methods
There are several methods to traverse a binary tree:

- **Inorder Traversal**: Visit the left subtree, then the root node, then the right subtree.
- **Preorder Traversal**: Visit the root node, then the left subtree, then the right subtree.
- **Postorder Traversal**: Visit the left subtree, then the right subtree, then the root node.
## Types of Binary Trees
- **Complete Binary Tree**: A binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible.
- **Full Binary Tree**: A binary tree in which every node other than the leaves has two children.
- **Perfect Binary Tree**: A binary tree in which all internal nodes have two children and all leaves are at the same level.
Balanced Binary Tree: A binary tree in which the depth of the two subtrees of every node never differs by more than one.

## Examples
```c
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *left;
    struct node *right;
};

// Inorder traversal
void inorderTraversal(struct node *root)
{
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    printf("%d ->", root->item);
    inorderTraversal(root->right);
}

// preorderTraversal traversal
void preorderTraversal(struct node *root)
{
    if (root == NULL)
        return;
    printf("%d ->", root->item);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// postorderTraversal traversal
void postorderTraversal(struct node *root)
{
    if (root == NULL)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ->", root->item);
}

// Create a new Node
struct node *createNode(value)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Insert on the left of the node
struct node *insertLeft(struct node *root, int value)
{
    root->left = createNode(value);
    return root->left;
}

// Insert on the right of the node
struct node *insertRight(struct node *root, int value)
{
    root->right = createNode(value);
    return root->right;
}

int main()
{
    struct node *root = createNode(1);
    insertLeft(root, 12);
    insertRight(root, 9);

    insertLeft(root->left, 5);
    insertRight(root->left, 6);

    printf("Inorder traversal \n");
    inorderTraversal(root);

    printf("\nPreorder traversal \n");
    preorderTraversal(root);

    printf("\nPostorder traversal \n");
    postorderTraversal(root);
}
```

## Conclusion
Binary trees are handy tools for organizing data efficiently. They offer faster search, insertion, and deletion compared to linked lists, and understanding their basics is essential for building efficient algorithms and applications.

## Let's connect!
**Twitter:** https://twitter.com/_ELOUARDY \
**Email:** ouadia@elouardy.com

