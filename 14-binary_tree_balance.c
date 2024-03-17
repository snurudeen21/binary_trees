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

/**
 * binary_tree_height - return the size of a binary tree
 * @tree: pointer to root node
 * Return: Height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_h;
	size_t r_h;

	if (tree == NULL)
	return (0);

	l_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (l_h > r_h ? l_h : r_h);
}
