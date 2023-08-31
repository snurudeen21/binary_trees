#include "binary_trees.h"

/**
 * binary_tree_size -  measures the size of a binary tree
 * @tree: pointer to the root node of the tree to
 * measure the size
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_subtree = binary_tree_size(tree->left);
	size_t right_subtree = binary_tree_size(tree->right);
	size_t total_size = 1 + left_subtree + right_subtree;

	return (total_size);
}
