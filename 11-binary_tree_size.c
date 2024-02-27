#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: binary tree
 *
 * Return: returns height of size tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = binary_tree_size(tree->left);

	if (tree->right)
		right = binary_tree_size(tree->right);

	return (left + right + 1);
}
