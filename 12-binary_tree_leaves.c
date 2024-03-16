#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in the binary tree
 * @tree: a pointer to the root node of the tree
 * to count the number of leaves
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size_t total_leaves = binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left);

	return (total_leaves);
}
