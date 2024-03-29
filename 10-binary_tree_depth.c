#include "binary_trees.h"

/**
 * binary_tree_depth - goes through a binary tree returning height of tree
 * @tree: pointer to root node
 * Return: depth of the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
