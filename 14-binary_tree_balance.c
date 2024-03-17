#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor
 *         0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_l, h_r;

	if (!tree)
		return (0);

	h_l = tree->left ? (int)binary_tree_height(tree->left) : -1;
	h_r = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (h_l - h_r);
}
