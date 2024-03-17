#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes in the binary tree
 * @tree: a pointer to the root node of the tree
 * to count the number of leaves
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
	{
		return (0);
	}

    if (tree->left != NULL || tree->right != NULL)
    {
        count = 1;
    }
    count += binary_tree_nodes(tree->left);
    count += binary_tree_nodes(tree->right);

    return (count);
}
