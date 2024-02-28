#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: binary tree
 *
 * Return: returns height of binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = binary_tree_balance(tree->left) + 1;

	if (tree->right)
		right = binary_tree_balance(tree->right) + 1;

	return (left - right);
}
