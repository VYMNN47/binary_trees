#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the amount of leaves in a binary tree
 * @tree: binary tree
 *
 * Return: returns amount of leaves in tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left)
		left = binary_tree_leaves(tree->left);

	if (tree->right)
		right = binary_tree_leaves(tree->right);

	return (left + right);
}
